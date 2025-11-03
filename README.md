# memscope

🔍 Analyze and simulate dynamic memory behavior in C/C++ code.

## Features
- Detect unfreed malloc/new in source code
- Simulate heap allocations/frees
- Useful for firmware/memory-level development

## Usage

```python
from memscope import analyze_source
print(analyze_source("examples/sample.c"))
