# Contribution Workflow

This repository is prepared for five parallel contributors. Keep each pull request or branch focused on one owned area so integration remains predictable.

## Branches

Use short ownership branches:

- `member-1-linked-list`
- `member-2-stack-array`
- `member-3-stack-linked-list`
- `member-4-queue-array`
- `member-5-queue-linked-list`

## Rules

- Do not rename the required root files unless the whole team agrees.
- Keep declarations in headers and method logic in `.cpp` files.
- Keep all data members private.
- Use destructors for every structure that allocates memory.
- Use the shared `Node` struct for linked implementations.
- Build with `make assignment-build` before merging.
- Update `main.cpp` only when integrating completed demonstrations.

## Merge Order

1. Merge `Node.h` changes first if any are needed.
2. Merge one data structure at a time.
3. After each merge, run `make assignment-build`.
4. Add `main.cpp` demonstrations after the corresponding structure is implemented.
