// Copyright (c) 2011-2020 The Samcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SAMCOIN_QT_SAMCOINADDRESSVALIDATOR_H
#define SAMCOIN_QT_SAMCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SamcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SamcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Samcoin address widget validator, checks for a valid samcoin address.
 */
class SamcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SamcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // SAMCOIN_QT_SAMCOINADDRESSVALIDATOR_H
