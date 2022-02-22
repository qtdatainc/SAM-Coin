Samcoin Core
=============

Setup
---------------------
Samcoin Core is the original Samcoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Samcoin transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Samcoin Core, visit [samcoincore.org](https://samcoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Samcoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/samcoin-qt` (GUI) or
- `bin/samcoind` (headless)

### Windows

Unpack the files into a directory, and then run samcoin-qt.exe.

### macOS

Drag Samcoin Core to your applications folder, and then run Samcoin Core.

### Need Help?

* See the documentation at the [Samcoin Wiki](https://en.samcoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [Samcoin StackExchange](https://samcoin.stackexchange.com).
* Ask for help on #samcoin on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://web.libera.chat/#samcoin).
* Ask for help on the [SamcoinTalk](https://samcointalk.org/) forums, in the [Technical Support board](https://samcointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Samcoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)
- [Gitian Building Guide (External Link)](https://github.com/samcoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Samcoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.samcoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [SamcoinTalk](https://samcointalk.org/) forums, in the [Development & Technical Discussion board](https://samcointalk.org/index.php?board=6.0).
* Discuss project-specific development on #samcoin-core-dev on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://web.libera.chat/#samcoin-core-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [samcoin.conf Configuration File](samcoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [I2P Support](i2p.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [PSBT support](psbt.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
