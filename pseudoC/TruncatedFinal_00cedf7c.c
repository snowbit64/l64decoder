// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00cedf7c
// Size: 400 bytes
// Signature: undefined __thiscall TruncatedFinal(HMAC_Base * this, uchar * param_1, ulong param_2)


/* CryptoPP::HMAC_Base::TruncatedFinal(unsigned char*, unsigned long) */

void __thiscall CryptoPP::HMAC_Base::TruncatedFinal(HMAC_Base *this,uchar *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  HashTransformation::ThrowIfInvalidTruncatedSize((HashTransformation *)(this + 8),param_2);
  plVar3 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
  if (this[0x30] == (HMAC_Base)0x0) {
    plVar4 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
    uVar7 = *(undefined8 *)(this + 0x28);
    uVar1 = (**(code **)(*plVar4 + 0x50))();
    (**(code **)(*plVar4 + 0x28))(plVar4,uVar7,uVar1);
    this[0x30] = (HMAC_Base)0x1;
  }
  lVar6 = *(long *)(this + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
  iVar2 = (**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,lVar6 + (ulong)(uint)(iVar2 << 1));
  lVar6 = *(long *)(this + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
  uVar5 = (**(code **)(*plVar4 + 0x50))();
  uVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3,lVar6 + (uVar5 & 0xffffffff),uVar1);
  lVar6 = *(long *)(this + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)this + 0xa8))(this);
  iVar2 = (**(code **)(*plVar4 + 0x50))();
  uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3,lVar6 + (ulong)(uint)(iVar2 << 1),uVar1);
  (**(code **)(*plVar3 + 0x80))(plVar3,param_1,param_2);
  this[0x30] = (HMAC_Base)0x0;
  return;
}


