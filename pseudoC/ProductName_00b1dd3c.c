// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProductName
// Entry Point: 00b1dd3c
// Size: 128 bytes
// Signature: undefined __thiscall ~ProductName(ProductName * this)


/* DeviceMappingManager::ProductName::~ProductName() */

void __thiscall DeviceMappingManager::ProductName::~ProductName(ProductName *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(this + 8);
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = *(byte **)(this + 0x10);
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *(byte **)(this + 8);
  }
  *(byte **)(this + 0x10) = pbVar2;
  operator_delete(pbVar3);
  return;
}


