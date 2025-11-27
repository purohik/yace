STRICT_OPTS = [
    "-std=c++23",
    "-O2",
    "-Wall",
    "-Wextra",
]

cc_library(
    name = "game_core",
    copts = STRICT_COPTS,
    srcs = [],
    hdrs = [],
)

cc_binary(
    name = "main",
    copts = STRICT_COPTS,
    srcs = ["main.cpp"],
    deps = [],
)

cc_library(
    name = "game",
    srcs = ["game/Board.cpp"],
    hdrs = ["game/Board.h"],
)
