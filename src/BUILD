STRICT_COPTS = [
    "-std=c++23",
    "-O2",
    "-Wall",
]

cc_binary(
    name = "main",
    srcs = [
        "main.cpp",
    ],
    copts = STRICT_COPTS,
    deps = [
        ":game",
    ],
)

cc_library(
    name = "game",
    srcs = [
        "game/Board.cpp",
				"game/Piece.cpp",
    ],
    hdrs = [
        "game/Board.h",
        "game/Constants.h",
        "game/Piece.h",
    ],
    copts = STRICT_COPTS,
)
