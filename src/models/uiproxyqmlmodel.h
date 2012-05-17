/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Copyright (C) 2012 Instituto Nokia de Tecnologia (INdT)
** Contact: http://www.qt-project.org/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef UIPROXYQMLMODEL_H
#define UIPROXYQMLMODEL_H

#ifndef QT_NO_PROXYQMLMODEL

#include "uihelpersglobal.h"
#include <UiStandardItemModel>

QT_BEGIN_HEADER

class QQuickListModel;

QT_BEGIN_NAMESPACE_UIHELPERS

class UIHELPERS_EXPORT UiProxyQmlModel : public UiStandardItemModel
{
public:
    enum ListType {
        InvalidList,
        ArrayList,
        QuickList
    };

    UiProxyQmlModel(QObject *parent = 0);

    ListType setSource(const QVariant &sourceModel);

protected:
    void createFromList(const QVariantList &list);
    void createFromQuickList(QQuickListModel *list);
};

QT_END_NAMESPACE_UIHELPERS

QT_END_HEADER

#endif // QT_NO_PROXYQMLMODEL
#endif // UIPROXYQMLMODEL_H
