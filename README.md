# SpiderBot

A 4-legged spider robot built on Arduino, with a fully 3D-printed shell. Walks autonomously and can be controlled remotely over the network.

## Overview

SpiderBot is a quadruped walking robot: 4 legs, 8 joints (2 servos per leg — elbow + knee), driven by an Arduino Nano. It combines real-time gait control with obstacle avoidance and a network layer for remote piloting.

## Hardware

- **MCU**: Arduino Nano (ATmega328)
- **Actuators**: 8x servo motors (2 per leg × 4 legs)
- **Sensors**: ultrasonic distance sensor (obstacle detection)
- **Enclosure**: custom 3D-printed shell
- **Communication**: network module for remote control

## Features

- Autonomous walking gait, computed per-leg from configurable joint angles
- Obstacle avoidance: adjusts direction and speed based on real-time distance readings
- Remote control over the network (start/stop/steer without a physical link)
- Modular firmware: direction, gait and I/O logic split into separate source files

## Tech stack

- **Language**: C
- **Framework**: Arduino (via PlatformIO)
- **Board**: `nanoatmega328new`
- **Dependencies**: `arduino-libraries/Servo`

## Project structure

