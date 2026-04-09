// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NavigationPath
// Entry Point: 00872858
// Size: 68 bytes
// Signature: undefined __thiscall ~NavigationPath(NavigationPath * this)


/* NavigationPath::~NavigationPath() */

void __thiscall NavigationPath::~NavigationPath(NavigationPath *this)

{
  *(undefined ***)this = &PTR__NavigationPath_00fdc1c8;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  Entity::~Entity((Entity *)this);
  return;
}


