// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readNumber
// Entry Point: 00ee7e98
// Size: 340 bytes
// Signature: undefined __cdecl readNumber(Position * param_1, uint param_2)


/* Luau::Lexer::readNumber(Luau::Position const&, unsigned int) */

void Luau::Lexer::readNumber(Position *param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  uint in_w2;
  undefined4 *in_x8;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x10);
  lVar2 = *(long *)param_1;
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = (uint)*(byte *)(lVar2 + uVar7);
  do {
    iVar5 = (int)uVar7;
    if (uVar4 == 10) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x18) = iVar5 + 1;
      *(int *)(param_1 + 0x10) = iVar5 + 1;
    }
    else {
      *(int *)(param_1 + 0x10) = iVar5 + 1;
    }
    uVar7 = (ulong)(iVar5 + 1);
    if (uVar3 <= uVar7) goto LAB_00ee7f4c;
    uVar4 = (uint)*(byte *)(lVar2 + uVar7);
  } while (((uVar4 - 0x30 < 10) || (uVar4 == 0x2e)) || (uVar4 == 0x5f));
  if ((uVar4 | 0x20) == 0x65) {
    uVar7 = (ulong)(iVar5 + 2U);
    *(uint *)(param_1 + 0x10) = iVar5 + 2U;
    if ((uVar7 < uVar3) && ((*(char *)(lVar2 + uVar7) == '-' || (*(char *)(lVar2 + uVar7) == '+'))))
    {
      uVar7 = (ulong)(iVar5 + 3U);
      *(uint *)(param_1 + 0x10) = iVar5 + 3U;
    }
  }
LAB_00ee7f4c:
  uVar4 = (uint)uVar7;
  while (uVar7 < uVar3) {
    uVar4 = (uint)uVar7;
    uVar6 = (uint)*(byte *)(lVar2 + uVar7);
    if ((uVar6 | 0x20) - 0x61 < 0x1a || uVar6 - 0x30 < 10) {
      if (uVar6 != 10) goto LAB_00ee7f90;
      uVar4 = uVar4 + 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(uint *)(param_1 + 0x18) = uVar4;
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x10) = uVar4;
    }
    else {
      if (uVar6 != 0x5f) break;
LAB_00ee7f90:
      uVar4 = uVar4 + 1;
      uVar7 = (ulong)uVar4;
      *(uint *)(param_1 + 0x10) = uVar4;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(ulong)param_2;
  *in_x8 = 0x116;
  *(undefined8 *)(in_x8 + 1) = uVar8;
  in_x8[5] = uVar4 - in_w2;
  *(ulong *)(in_x8 + 6) = lVar2 + (ulong)in_w2;
  *(ulong *)(in_x8 + 3) = CONCAT44(uVar4 - iVar5,uVar1);
  return;
}


