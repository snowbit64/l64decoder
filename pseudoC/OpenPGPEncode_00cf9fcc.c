// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OpenPGPEncode
// Entry Point: 00cf9fcc
// Size: 352 bytes
// Signature: undefined __thiscall OpenPGPEncode(Integer * this, BufferedTransformation * param_1)


/* CryptoPP::Integer::OpenPGPEncode(CryptoPP::BufferedTransformation&) const */

long __thiscall CryptoPP::Integer::OpenPGPEncode(Integer *this,BufferedTransformation *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined local_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar4 = (int)*(ulong *)(this + 0x18) * -0x20;
  uVar9 = *(ulong *)(this + 0x18);
  do {
    if (uVar9 == 0) goto LAB_00cfa05c;
    uVar8 = uVar9 - 1;
    lVar1 = uVar9 * 4;
    iVar4 = iVar4 + 0x20;
    uVar9 = uVar8;
  } while (*(int *)(*(long *)(this + 0x20) + -4 + lVar1) == 0);
  if ((int)uVar8 == -1) {
LAB_00cfa05c:
    uVar6 = 0;
  }
  else {
    uVar10 = *(uint *)(*(long *)(this + 0x20) + (uVar8 & 0xffffffff) * 4);
    if (uVar10 == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar5 = 0x20;
      do {
        uVar2 = uVar7 + uVar5 >> 1;
        uVar6 = uVar2;
        if (uVar10 >> (ulong)(uVar2 & 0x1f) != 0) {
          uVar6 = uVar5;
          uVar7 = uVar2;
        }
        uVar5 = uVar6;
      } while (1 < uVar6 - uVar7);
    }
    uVar6 = uVar6 - iVar4;
  }
  BufferedTransformation::PutWord16(param_1,(ushort)uVar6,1,true);
  uVar10 = (uVar6 & 0xffff) + 7;
  uVar9 = (ulong)(uVar10 >> 3);
  if ((uVar6 & 0xffff) != 0) {
    uVar10 = uVar10 & 0xfffffff8;
    uVar8 = uVar9 - 1;
    do {
      uVar10 = uVar10 - 8;
      if (uVar8 >> 2 < *(ulong *)(this + 0x18)) {
        local_4c[0] = (undefined)
                      (*(uint *)(*(long *)(this + 0x20) + (uVar8 & 0xfffffffffffffffc)) >>
                      (ulong)(uVar10 & 0x18));
      }
      else {
        local_4c[0] = 0;
      }
      (**(code **)(*(long *)param_1 + 0x38))(param_1,local_4c,1,0,1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0xffffffffffffffff);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar9 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


