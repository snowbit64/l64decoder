// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProfilerManager
// Entry Point: 00b00ae0
// Size: 192 bytes
// Signature: undefined __thiscall ~ProfilerManager(ProfilerManager * this)


/* ProfilerManager::~ProfilerManager() */

void __thiscall ProfilerManager::~ProfilerManager(ProfilerManager *this)

{
  ProfilerManager PVar1;
  void *pvVar2;
  ProfiledSection *pPVar3;
  ProfiledSection *this_00;
  ProfiledSection *pPVar4;
  
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x40));
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (((byte)this[0x68] & 1) == 0) {
    PVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    PVar1 = this[0x50];
  }
  if (((byte)PVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x18);
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    pvVar2 = *(void **)(this + 0x18);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  pPVar4 = *(ProfiledSection **)this;
  if (pPVar4 == (ProfiledSection *)0x0) {
    return;
  }
  this_00 = *(ProfiledSection **)(this + 8);
  pPVar3 = pPVar4;
  if (this_00 != pPVar4) {
    do {
      this_00 = this_00 + -0x140;
      ProfiledSection::~ProfiledSection(this_00);
    } while (this_00 != pPVar4);
    pPVar3 = *(ProfiledSection **)this;
  }
  *(ProfiledSection **)(this + 8) = pPVar4;
  operator_delete(pPVar3);
  return;
}


