// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdvancedProcessBlocks
// Entry Point: 00c78658
// Size: 488 bytes
// Signature: undefined __thiscall AdvancedProcessBlocks(BlockTransformation * this, uchar * param_1, uchar * param_2, uchar * param_3, ulong param_4, uint param_5)


/* CryptoPP::BlockTransformation::AdvancedProcessBlocks(unsigned char const*, unsigned char const*,
   unsigned char*, unsigned long, unsigned int) const */

ulong __thiscall
CryptoPP::BlockTransformation::AdvancedProcessBlocks
          (BlockTransformation *this,uchar *param_1,uchar *param_2,uchar *param_3,ulong param_4,
          uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = (**(code **)(*(long *)this + 0x30))();
  uVar4 = uVar7;
  if ((param_5 & 3) != 0) {
    uVar4 = 0;
  }
  uVar9 = (ulong)uVar7;
  lVar8 = param_4 - uVar9;
  uVar3 = 0;
  if (param_2 != (uchar *)0x0) {
    uVar3 = uVar9;
  }
  uVar5 = uVar7;
  if ((param_5 & 2) != 0) {
    uVar5 = 0;
  }
  bVar6 = (param_5 & 8) != 0;
  if (bVar6) {
    param_2 = param_2 + lVar8;
    param_3 = param_3 + lVar8;
  }
  uVar1 = -(ulong)uVar4;
  if (!bVar6) {
    uVar1 = (ulong)uVar4;
  }
  uVar2 = -uVar3;
  if (!bVar6) {
    uVar2 = uVar3;
  }
  uVar3 = -(ulong)uVar5;
  if (!bVar6) {
    uVar3 = (ulong)uVar5;
  }
  if ((param_5 & 8) != 0) {
    param_1 = param_1 + lVar8;
  }
  if (uVar9 <= param_4) {
    uVar7 = uVar7 - 1;
    if (((param_5 >> 2 & 1) == 0) || (param_2 == (uchar *)0x0)) {
      if ((param_5 & 1) == 0) {
        do {
          (**(code **)(*(long *)this + 0x28))(this,param_1,param_2,param_3);
          param_1 = param_1 + uVar1;
          param_3 = param_3 + uVar3;
          param_2 = param_2 + uVar2;
          param_4 = param_4 - uVar9;
        } while (uVar9 <= param_4);
      }
      else {
        do {
          (**(code **)(*(long *)this + 0x28))(this,param_1,param_2,param_3);
          param_3 = param_3 + uVar3;
          param_2 = param_2 + uVar2;
          param_4 = param_4 - uVar9;
          param_1[uVar7] = param_1[uVar7] + '\x01';
          param_1 = param_1 + uVar1;
        } while (uVar9 <= param_4);
      }
    }
    else if ((param_5 & 1) == 0) {
      do {
        xorbuf(param_3,param_2,param_1,uVar9);
        (**(code **)(*(long *)this + 0x28))(this,param_3,0,param_3);
        param_1 = param_1 + uVar1;
        param_3 = param_3 + uVar3;
        param_2 = param_2 + uVar2;
        param_4 = param_4 - uVar9;
      } while (uVar9 <= param_4);
    }
    else {
      do {
        xorbuf(param_3,param_2,param_1,uVar9);
        (**(code **)(*(long *)this + 0x28))(this,param_3,0,param_3);
        param_3 = param_3 + uVar3;
        param_2 = param_2 + uVar2;
        param_4 = param_4 - uVar9;
        param_1[uVar7] = param_1[uVar7] + '\x01';
        param_1 = param_1 + uVar1;
      } while (uVar9 <= param_4);
    }
  }
  return param_4;
}


