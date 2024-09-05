TIMER0
======

Timer
-----

Provides a generic Timer core.

The Timer is implemented as a countdown timer that can be used in various modes:

- Polling : Returns current countdown value to software
- One-Shot: Loads itself and stops when value reaches ``0``
- Periodic: (Re-)Loads itself when value reaches ``0``

``en`` register allows the user to enable/disable the Timer. When the Timer is enabled, it is
automatically loaded with the value of `load` register.

When the Timer reaches ``0``, it is automatically reloaded with value of `reload` register.

The user can latch the current countdown value by writing to ``update_value`` register, it will
update ``value`` register with current countdown value.

To use the Timer in One-Shot mode, the user needs to:

- Disable the timer
- Set the ``load`` register to the expected duration
- (Re-)Enable the Timer

To use the Timer in Periodic mode, the user needs to:

- Disable the Timer
- Set the ``load`` register to 0
- Set the ``reload`` register to the expected period
- Enable the Timer

For both modes, the CPU can be advertised by an IRQ that the duration/period has elapsed. (The
CPU can also do software polling with ``update_value`` and ``value`` to know the elapsed duration)


