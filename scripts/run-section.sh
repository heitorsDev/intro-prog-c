#!/usr/bin/env bash
#
# Compile and run one exercise list.
#
# Invoked through a symlink whose name selects the section:
#   seq  -> sequenciais/Sequenciais.c
#   cond -> condicionais/Condicionais.c
#   iter -> iterativos-vetores/IterativosVetores.c
#
# Any extra arguments are passed to the compiled program.

set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$(readlink -f "${BASH_SOURCE[0]}")")/.." && pwd)"

case "$(basename "$0")" in
    seq)  SECTION_DIR="sequenciais";        SOURCE="Sequenciais.c" ;;
    cond) SECTION_DIR="condicionais";       SOURCE="Condicionais.c" ;;
    iter) SECTION_DIR="iterativos-vetores"; SOURCE="IterativosVetores.c" ;;
    *)
        echo "run-section: unknown section '$(basename "$0")' (expected seq, cond or iter)" >&2
        exit 2
        ;;
esac

SOURCE_PATH="$REPO_ROOT/$SECTION_DIR/$SOURCE"
BUILD_DIR="$REPO_ROOT/build"
BINARY="$BUILD_DIR/$SECTION_DIR"

mkdir -p "$BUILD_DIR"

gcc -Wall -Wextra -std=c17 -g -o "$BINARY" "$SOURCE_PATH" -lm

exec "$BINARY" "$@"
