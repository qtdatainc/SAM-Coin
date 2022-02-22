.PHONY: FORCE
all: FORCE
	$(MAKE) -C .. samcoin_qt test_samcoin_qt
clean: FORCE
	$(MAKE) -C .. samcoin_qt_clean test_samcoin_qt_clean
check: FORCE
	$(MAKE) -C .. test_samcoin_qt_check
samcoin-qt samcoin-qt.exe: FORCE
	 $(MAKE) -C .. samcoin_qt
apk: FORCE
	$(MAKE) -C .. samcoin_qt_apk
