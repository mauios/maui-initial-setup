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

#ifndef NETWORK_H
#define NETWORK_H

#include <QWizardPage>

namespace Ui
{
    class Network;
}

class ConnMan;
class Agent;
class Technology;

class Network : public QWizardPage
{
    Q_OBJECT

public:
    explicit Network(QWidget *parent = 0);
    ~Network();

private:
    Ui::Network *ui;
    ConnMan *m_manager;
    Agent *m_agent;
    Technology *m_curTechnology;

private Q_SLOTS:
    void technologySelected(int index);
    void technologyEnabled(bool enabled);
};

#endif // NETWORK_H
