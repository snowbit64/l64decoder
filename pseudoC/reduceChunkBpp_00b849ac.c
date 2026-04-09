// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reduceChunkBpp
// Entry Point: 00b849ac
// Size: 1112 bytes
// Signature: undefined reduceChunkBpp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ChunkedBitSquareChunk::reduceChunkBpp() */

code ** ChunkedBitSquareChunk::reduceChunkBpp(void)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  code **in_x0;
  code **ppcVar7;
  uint uVar8;
  code *pcVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  code **ppcVar13;
  uint uVar14;
  ushort local_60 [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar14 = 0;
  bVar4 = true;
  uVar1 = (uint)*(byte *)(in_x0 + 2) + (uint)*(byte *)((long)in_x0 + 0x13);
  uVar11 = 0;
  do {
    uVar5 = (**in_x0)();
    if (uVar14 != 0) {
      uVar8 = 0;
      do {
        if (local_60[uVar8] == uVar5) {
          if ((uVar8 & 0xff) != 4) goto LAB_00b84a18;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar14 != uVar8);
      if (3 < uVar14) {
        if ((bVar4) || (uVar14 != 4)) goto LAB_00b84dd0;
        goto LAB_00b84bd4;
      }
    }
    local_60[uVar14] = uVar5;
    uVar14 = uVar14 + 1;
LAB_00b84a18:
    uVar8 = uVar11 + 1;
    bVar4 = uVar11 < 0x3ff;
    uVar11 = uVar8;
  } while (uVar8 != 0x400);
  if (uVar14 == 1) {
    if (*(char *)(in_x0 + 2) == '\0') goto LAB_00b84dd0;
    ppcVar7 = (code **)operator_new(0x20);
    *(undefined *)(ppcVar7 + 2) = 0;
    *(char *)((long)ppcVar7 + 0x13) = (char)uVar1;
    if ((uVar1 & 0xff) == 0) {
      pcVar9 = writeValueNoPalette;
      *(undefined2 *)((long)ppcVar7 + 0x11) = 0;
      *ppcVar7 = readValueNoPalette;
    }
    else {
      uVar14 = uVar1 - 1;
      if (1 < uVar14) {
        uVar14 = 2;
      }
      *(ushort *)((long)ppcVar7 + 0x14) = local_60[0];
      *(undefined4 *)((long)ppcVar7 + 0x16) = 0xffffffff;
      pcVar9 = *(code **)(s_pWriteValueFns + (ulong)uVar14 * 0x18);
      *(undefined2 *)((long)ppcVar7 + 0x1a) = 0xffff;
      puVar3 = s_pReadValueFns;
      *(undefined2 *)((long)ppcVar7 + 0x11) = 0x100;
      *ppcVar7 = (code *)puVar3;
    }
    ppcVar13 = ppcVar7 + 1;
    *ppcVar13 = pcVar9;
    *(undefined4 *)((long)ppcVar7 + 0x1c) = 0;
  }
  else if (uVar14 < 3) {
    if ((*(char *)(in_x0 + 2) == '\x01') &&
       ((*(char *)((long)in_x0 + 0x13) == '\0' || (uVar14 == *(byte *)((long)in_x0 + 0x12)))))
    goto LAB_00b84dd0;
    ppcVar7 = (code **)operator_new(0xa0);
    uVar11 = uVar1 - 1;
    *(undefined *)(ppcVar7 + 2) = 1;
    *(char *)((long)ppcVar7 + 0x13) = (char)uVar11;
    if ((uVar11 & 0xff) == 0) {
      pcVar10 = writeValueNoPalette;
      *(undefined2 *)((long)ppcVar7 + 0x11) = 0;
      pcVar9 = readValueNoPalette;
    }
    else {
      *(char *)((long)ppcVar7 + 0x12) = (char)uVar14;
      memcpy((void *)((long)ppcVar7 + 0x14),local_60,(ulong)uVar14 * 2);
      memset((void *)((long)ppcVar7 + (ulong)uVar14 * 2 + 0x14),0xff,(ulong)(3 - uVar14) * 2 + 2);
      if (1 < uVar11) {
        uVar11 = 2;
      }
      *(undefined *)((long)ppcVar7 + 0x11) = 1;
      pcVar10 = *(code **)(s_pWriteValueFns + (ulong)uVar11 * 0x18 + 8);
      pcVar9 = (code *)PTR_readValueTemplate<1u>_01045240;
    }
    *ppcVar7 = pcVar9;
    ppcVar13 = ppcVar7 + 1;
    *ppcVar13 = pcVar10;
    *(undefined8 *)((long)ppcVar7 + 0x24) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x1c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x34) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x2c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x44) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x3c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x54) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x4c) = 0;
    *(undefined8 *)((long)ppcVar7 + 100) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x5c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x74) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x6c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x84) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x7c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x94) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x8c) = 0;
    *(undefined4 *)((long)ppcVar7 + 0x9c) = 0;
  }
  else {
    if (4 < uVar14) goto LAB_00b84dd0;
LAB_00b84bd4:
    if ((*(char *)(in_x0 + 2) == '\x02') &&
       ((*(char *)((long)in_x0 + 0x13) == '\0' || (uVar14 == *(byte *)((long)in_x0 + 0x12)))))
    goto LAB_00b84dd0;
    ppcVar7 = (code **)operator_new(0x120);
    *(undefined *)(ppcVar7 + 2) = 2;
    *(char *)((long)ppcVar7 + 0x13) = (char)(uVar1 - 2);
    if ((uVar1 - 2 & 0xff) == 0) {
      pcVar9 = writeValueNoPalette;
      *(undefined2 *)((long)ppcVar7 + 0x11) = 0;
      *ppcVar7 = readValueNoPalette;
    }
    else {
      *(char *)((long)ppcVar7 + 0x12) = (char)uVar14;
      memcpy((void *)((long)ppcVar7 + 0x14),local_60,(ulong)uVar14 * 2);
      if (uVar14 < 4) {
        memset((void *)((long)ppcVar7 + (ulong)uVar14 * 2 + 0x14),0xff,(ulong)(3 - uVar14) * 2 + 2);
      }
      puVar3 = PTR_readValueTemplate<2u>_01045248;
      uVar14 = uVar1 - 1;
      if (1 < uVar14) {
        uVar14 = 2;
      }
      *(undefined *)((long)ppcVar7 + 0x11) = 3;
      pcVar9 = *(code **)(s_pWriteValueFns + (ulong)uVar14 * 0x18 + 0x10);
      *ppcVar7 = (code *)puVar3;
    }
    ppcVar13 = ppcVar7 + 1;
    *ppcVar13 = pcVar9;
    *(undefined8 *)((long)ppcVar7 + 0x34) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x2c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x44) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x3c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x54) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x4c) = 0;
    *(undefined8 *)((long)ppcVar7 + 100) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x5c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x74) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x6c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x84) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x7c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x94) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x8c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xa4) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x9c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xb4) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xac) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xc4) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xbc) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xd4) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xcc) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xe4) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xdc) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xf4) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xec) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x104) = 0;
    *(undefined8 *)((long)ppcVar7 + 0xfc) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x24) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x1c) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x114) = 0;
    *(undefined8 *)((long)ppcVar7 + 0x10c) = 0;
    *(undefined4 *)((long)ppcVar7 + 0x11c) = 0;
  }
  iVar12 = 0;
  do {
    uVar6 = (**in_x0)();
    (**ppcVar13)(ppcVar7,iVar12,0,~(-1 << (ulong)(uVar1 & 0x1f)),uVar6);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0x400);
  operator_delete(in_x0);
  in_x0 = ppcVar7;
LAB_00b84dd0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_x0;
}


