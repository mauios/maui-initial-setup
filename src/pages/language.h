/****************************************************************************
 * This file is part of Maui Initial Setup.
 *
 * Copyright (C) 2013 Pier Luigi Fiorini <pierluigi.fiorini@gmail.com>
 *
 * Author(s):
 *    Pier Luigi Fiorini
 *
 * $BEGIN_LICENSE:GPL2+$
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * $END_LICENSE$
 ***************************************************************************/

#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <QWizardPage>
#include <QLocale>

namespace Ui
{
    class Language;
}

class LanguageModel;
class LanguageSortFilterProxyModel;

class Language : public QWizardPage
{
    Q_OBJECT

public:
    explicit Language(QWidget *parent = 0);
    ~Language();

    QLocale::Language language() const;

    bool isComplete() const;

protected:
    void changeEvent(QEvent *event);

private:
    Ui::Language *ui;
    LanguageSortFilterProxyModel *m_proxyModel;
    LanguageModel *m_model;
    QLocale::Language m_lang;

private Q_SLOTS:
    void languageSelected(const QModelIndex &current, const QModelIndex &previous);
    void toggleShowAll(bool toggle);
};

#endif // LANGUAGE_H
