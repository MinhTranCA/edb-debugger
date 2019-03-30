/*
Copyright (C) 2016 - 2016 Evan Teran
                          evan.teran@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DIALOG_MEMORY_ACCESS_20160930_H_
#define DIALOG_MEMORY_ACCESS_20160930_H_

#include <QDialog>

namespace DebuggerCorePlugin {

namespace Ui { class DialogMemoryAccess; }

class DialogMemoryAccess final : public QDialog {
	Q_OBJECT

public:
    explicit DialogMemoryAccess(QWidget *parent = nullptr);
    ~DialogMemoryAccess() override;

public:
	bool warnNextTime() const;

private:
	 Ui::DialogMemoryAccess *const ui;
};

}

#endif
