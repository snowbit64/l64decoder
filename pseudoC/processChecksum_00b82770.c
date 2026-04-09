// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processChecksum
// Entry Point: 00b82770
// Size: 1120 bytes
// Signature: undefined __thiscall processChecksum(TriangleSet * this, CRC64 * param_1)


/* TriangleSet::processChecksum(CRC64&) const */

void __thiscall TriangleSet::processChecksum(TriangleSet *this,CRC64 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  byte *pbVar9;
  long lVar10;
  
  uVar1 = *(uint *)(this + 0xc);
  uVar5 = *(ulong *)param_1;
  uVar7 = uVar5 ^ (ulong)uVar1 & 0xff;
  *(ulong *)param_1 = uVar7;
  uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
  uVar7 = uVar5 ^ (ulong)(uVar1 >> 8) & 0xff;
  *(ulong *)param_1 = uVar7;
  uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
  uVar7 = uVar5 ^ (ulong)(uVar1 >> 0x10) & 0xff;
  *(ulong *)param_1 = uVar7;
  uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
  uVar7 = uVar5 ^ uVar1 >> 0x18;
  *(ulong *)param_1 = uVar7;
  uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
  puVar8 = *(uint **)(this + 0x10);
  *(ulong *)param_1 = uVar5;
  if (puVar8 != (uint *)0x0) {
    for (iVar6 = *(int *)(this + 8) * 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar2 = *puVar8;
      uVar7 = uVar5 ^ (ulong)uVar2 & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 8) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ uVar2 >> 0x18;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      *(ulong *)param_1 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(uint **)(this + 0x38) != (uint *)0x0) {
    puVar8 = *(uint **)(this + 0x38);
    for (iVar6 = *(int *)(this + 8) * 3; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar2 = *puVar8;
      uVar7 = uVar5 ^ (ulong)uVar2 & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 8) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ uVar2 >> 0x18;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      *(ulong *)param_1 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(uint **)(this + 0x40) != (uint *)0x0) {
    puVar8 = *(uint **)(this + 0x40);
    for (iVar6 = *(int *)(this + 8) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar2 = *puVar8;
      uVar7 = uVar5 ^ (ulong)uVar2 & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 8) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ uVar2 >> 0x18;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      *(ulong *)param_1 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(uint **)(this + 0x48) != (uint *)0x0) {
    puVar8 = *(uint **)(this + 0x48);
    for (iVar6 = *(int *)(this + 8) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar2 = *puVar8;
      uVar7 = uVar5 ^ (ulong)uVar2 & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 8) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ uVar2 >> 0x18;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      *(ulong *)param_1 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(uint **)(this + 0x50) != (uint *)0x0) {
    iVar6 = 4;
    if ((uVar1 & 0x100) != 0) {
      iVar6 = 1;
    }
    puVar8 = *(uint **)(this + 0x50);
    for (iVar6 = *(int *)(this + 8) * iVar6; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar2 = *puVar8;
      uVar7 = uVar5 ^ (ulong)uVar2 & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 8) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar2 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ uVar2 >> 0x18;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      *(ulong *)param_1 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(byte **)(this + 0x58) != (byte *)0x0) {
    iVar6 = 4;
    if ((uVar1 & 0x100) != 0) {
      iVar6 = 1;
    }
    uVar7 = (ulong)(uint)(*(int *)(this + 8) * iVar6);
    pbVar9 = *(byte **)(this + 0x58);
    if (*(int *)(this + 8) * iVar6 != 0) {
      do {
        bVar3 = *pbVar9;
        uVar7 = uVar7 - 1;
        *(ulong *)param_1 = uVar5 ^ bVar3;
        uVar5 = *(ulong *)(CRC64::s_t + ((uVar5 ^ bVar3) & 0xff) * 8) ^ uVar5 >> 8;
        *(ulong *)param_1 = uVar5;
        pbVar9 = pbVar9 + 1;
      } while (uVar7 != 0);
    }
  }
  iVar6 = *(int *)(this + 8);
  lVar10 = 0;
  do {
    puVar8 = *(uint **)(this + lVar10 * 8 + 0x18);
    iVar4 = iVar6 << 1;
    if (puVar8 != (uint *)0x0 && iVar6 << 1 != 0) {
      do {
        uVar1 = *puVar8;
        iVar4 = iVar4 + -1;
        uVar7 = uVar5 ^ (ulong)uVar1 & 0xff;
        *(ulong *)param_1 = uVar7;
        uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
        uVar7 = uVar5 ^ (ulong)(uVar1 >> 8) & 0xff;
        *(ulong *)param_1 = uVar7;
        uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
        uVar7 = uVar5 ^ (ulong)(uVar1 >> 0x10) & 0xff;
        *(ulong *)param_1 = uVar7;
        uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
        uVar7 = uVar5 ^ uVar1 >> 0x18;
        *(ulong *)param_1 = uVar7;
        uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
        *(ulong *)param_1 = uVar5;
        puVar8 = puVar8 + 1;
      } while (iVar4 != 0);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  puVar8 = *(uint **)(this + 0x60);
  if (puVar8 != (uint *)0x0) {
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar1 = *puVar8;
      uVar7 = uVar5 ^ (ulong)uVar1 & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar1 >> 8) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ (ulong)(uVar1 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      uVar7 = uVar5 ^ uVar1 >> 0x18;
      *(ulong *)param_1 = uVar7;
      uVar5 = *(ulong *)(CRC64::s_t + (uVar7 & 0xff) * 8) ^ uVar5 >> 8;
      *(ulong *)param_1 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}


