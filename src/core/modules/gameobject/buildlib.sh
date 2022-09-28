#! /bin/bash

cargo build --release && cd target/release/ && mv libgameobject.a ~/projects/game/game-engine/src/core/modules/gameobject/