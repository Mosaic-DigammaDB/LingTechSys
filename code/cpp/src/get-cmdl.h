
//           Copyright Nathaniel Christen 2020.
//  Distributed under the Boost Software License, Version 1.0.
//     (See accompanying file LICENSE_1_0.txt or copy at
//           http://www.boost.org/LICENSE_1_0.txt)


#ifndef GET_CMDL__H
#define GET_CMDL__H

#include "kans.h"

#include "global-types.h"

#include <QFile>
#include <QTextStream>

#include <QVector>
#include <QPair>
#include <QtGlobal>


KANS_(TextIO)


inline QStringList get_cmdl(int argc, char* argv[])
{
 QStringList result;
 for(int i = 0; i < argc; ++i)
   result.push_back(QString::fromLatin1(argv[i]));
 return result;
}


inline QStringList get_cmdl(int argc, char* argv[], 
  int offset, const QVector< QPair<QString*, const QString&> > vec)
{
 QStringList result;
 int sz = vec.size();
 for(int i = 0; i < argc; ++i)
 {
  QString arg = QString::fromLatin1(argv[i]);
  result.push_back(arg);
  if(i < offset)
    continue;
  *vec[i - offset].first = arg;
 }
 for(int i = qMax(argc - offset, 0); i < sz; ++i)
 {
  *vec[i].first = vec[i].second;
 }
 return result;
}


_KANS(TextIO)


#endif // GET_CMDL__H
