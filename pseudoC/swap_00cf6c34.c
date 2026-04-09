// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap
// Entry Point: 00cf6c34
// Size: 52 bytes
// Signature: undefined __thiscall swap(Integer * this, Integer * param_1)


/* CryptoPP::Integer::swap(CryptoPP::Integer&) */

void __thiscall CryptoPP::Integer::swap(Integer *this,Integer *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(this + 0x28);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = uVar4;
  uVar1 = *(undefined8 *)(this + 0x18);
  uVar3 = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


