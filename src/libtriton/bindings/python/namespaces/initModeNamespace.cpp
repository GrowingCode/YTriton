//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the Apache License 2.0.
*/

#include <triton/pythonBindings.hpp>
#include <triton/pythonUtils.hpp>
#include <triton/pythonXFunctions.hpp>
#include <triton/modes.hpp>



/*! \page py_MODE_page MODE
    \brief [**python api**] All information about the MODE Python namespace.

\tableofcontents

\section MODE_py_description Description
<hr>

The MODE namespace contains all kinds of modes.

\subsection MODE_py_example Example

~~~~~~~~~~~~~{.py}
>>> setMode(MODE.ONLY_ON_TAINTED, True)
~~~~~~~~~~~~~

\section MODE_py_api Python API - Items of the MODE namespace
<hr>

- **MODE.ALIGNED_MEMORY**<br>
Keeps a map of aligned memory to reduce the symbolic memory explosion of `LOAD` and `STORE` accesses.

- **MODE.AST_OPTIMIZATIONS**<br>
Reduces the depth of the trees using classical arithmetic optimisations.

- **MODE.CONCRETIZE_UNDEFINED_REGISTERS**<br>
Concretizes every register tagged as undefined (see #750).

- **MODE.CONSTANT_FOLDING**<br>
Performs a constant folding optimization of sub ASTs which do not contain symbolic variables.

- **MODE.MEMORY_ARRAY**<br>
Enables symbolic pointers reasoning (QF_ABV logic). When this mode is not enabled, which is the case by default, the QF_BV memory model is applied.

- **MODE.ONLY_ON_SYMBOLIZED**<br>
Removes symbolic expressions that does not contain symbolic variable.

- **MODE.ONLY_ON_TAINTED**<br>
Removes symbolic expressions that are not tainted.

- **MODE.PC_TRACKING_SYMBOLIC**<br>
Tracks path constraints only if they are symbolized. This mode is enabled by default.

- **MODE.SYMBOLIZE_INDEX_ROTATION**<br>
Symbolizes the index of rotation for `bvror` and `bvrol` nodes. This mode increases the complexity of solving.

- **MODE.SYMBOLIZE_LOAD**<br>
Keeps symbolic expressions on load indexes (concretize them otherwise).

- **MODE.SYMBOLIZE_STORE**<br>
Keeps symbolic expressions on store indexes (concretize them otherwise).

- **MODE.TAINT_THROUGH_POINTERS**<br>
Spreads taint in non `MEMORY_ARRAY` mode if an index pointer is tainted (see #725).

*/



namespace triton {
  namespace bindings {
    namespace python {

      void initModeNamespace(PyObject* modeDict) {
        xPyDict_SetItemString(modeDict, "ALIGNED_MEMORY",                 PyLong_FromUint32(triton::modes::ALIGNED_MEMORY));
        xPyDict_SetItemString(modeDict, "AST_OPTIMIZATIONS",              PyLong_FromUint32(triton::modes::AST_OPTIMIZATIONS));
        xPyDict_SetItemString(modeDict, "CONCRETIZE_UNDEFINED_REGISTERS", PyLong_FromUint32(triton::modes::CONCRETIZE_UNDEFINED_REGISTERS));
        xPyDict_SetItemString(modeDict, "CONSTANT_FOLDING",               PyLong_FromUint32(triton::modes::CONSTANT_FOLDING));
        xPyDict_SetItemString(modeDict, "MEMORY_ARRAY",                   PyLong_FromUint32(triton::modes::MEMORY_ARRAY));
        xPyDict_SetItemString(modeDict, "ONLY_ON_SYMBOLIZED",             PyLong_FromUint32(triton::modes::ONLY_ON_SYMBOLIZED));
        xPyDict_SetItemString(modeDict, "ONLY_ON_TAINTED",                PyLong_FromUint32(triton::modes::ONLY_ON_TAINTED));
        xPyDict_SetItemString(modeDict, "PC_TRACKING_SYMBOLIC",           PyLong_FromUint32(triton::modes::PC_TRACKING_SYMBOLIC));
        xPyDict_SetItemString(modeDict, "SYMBOLIZE_INDEX_ROTATION",       PyLong_FromUint32(triton::modes::SYMBOLIZE_INDEX_ROTATION));
        xPyDict_SetItemString(modeDict, "SYMBOLIZE_LOAD",                 PyLong_FromUint32(triton::modes::SYMBOLIZE_LOAD));
        xPyDict_SetItemString(modeDict, "SYMBOLIZE_STORE",                PyLong_FromUint32(triton::modes::SYMBOLIZE_STORE));
        xPyDict_SetItemString(modeDict, "TAINT_THROUGH_POINTERS",         PyLong_FromUint32(triton::modes::TAINT_THROUGH_POINTERS));
      }

    }; /* python namespace */
  }; /* bindings namespace */
}; /* triton namespace */
