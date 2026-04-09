// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAxisMapping
// Entry Point: 00b1ddbc
// Size: 284 bytes
// Signature: undefined __thiscall getAxisMapping(DeviceMapping * this, IndexedUsage * param_1)


/* DeviceMappingManager::DeviceMapping::getAxisMapping(DeviceMappingManager::IndexedUsage const&) */

int * __thiscall
DeviceMappingManager::DeviceMapping::getAxisMapping(DeviceMapping *this,IndexedUsage *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = (int *)(this + 8);
  if (((((*piVar3 == iVar1) && (*(int *)(this + 0xc) == iVar2)) ||
       ((piVar3 = (int *)(this + 0x50), *piVar3 == iVar1 && (*(int *)(this + 0x54) == iVar2)))) ||
      ((piVar3 = (int *)(this + 0x98), *piVar3 == iVar1 && (*(int *)(this + 0x9c) == iVar2)))) ||
     ((piVar3 = (int *)(this + 0xe0), *piVar3 == iVar1 && (*(int *)(this + 0xe4) == iVar2)))) {
    return piVar3;
  }
  if ((*(int *)(this + 0x128) == iVar1) && (*(int *)(this + 300) == iVar2)) {
    return (int *)(this + 0x128);
  }
  if ((*(int *)(this + 0x170) == iVar1) && (*(int *)(this + 0x174) == iVar2)) {
    return (int *)(this + 0x170);
  }
  if ((*(int *)(this + 0x1b8) == iVar1) && (*(int *)(this + 0x1bc) == iVar2)) {
    return (int *)(this + 0x1b8);
  }
  if ((*(int *)(this + 0x200) == iVar1) && (*(int *)(this + 0x204) == iVar2)) {
    return (int *)(this + 0x200);
  }
  piVar3 = (int *)(this + 0x248);
  if (*(int *)(this + 0x24c) != iVar2 || *(int *)(this + 0x248) != iVar1) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}


