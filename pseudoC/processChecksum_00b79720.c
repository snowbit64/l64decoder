// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processChecksum
// Entry Point: 00b79720
// Size: 572 bytes
// Signature: undefined __thiscall processChecksum(IndexedTriangleSet * this, CRC64 * param_1)


/* IndexedTriangleSet::processChecksum(CRC64&) const */

void __thiscall IndexedTriangleSet::processChecksum(IndexedTriangleSet *this,CRC64 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  TriangleSet::processChecksum((TriangleSet *)this,param_1);
  puVar4 = *(uint **)(this + 0x70);
  if (puVar4 != (uint *)0x0) {
    iVar5 = *(int *)(this + 0x68);
    if (*(uint *)(this + 8) < 0x10001) {
      if (iVar5 != 0) {
        uVar7 = *(ulong *)param_1;
        do {
          uVar3 = *(ushort *)puVar4;
          iVar5 = iVar5 + -1;
          uVar9 = uVar7 ^ (ulong)uVar3 & 0xff;
          *(ulong *)param_1 = uVar9;
          uVar7 = *(ulong *)(CRC64::s_t + (uVar9 & 0xff) * 8) ^ uVar7 >> 8;
          uVar9 = uVar7 ^ uVar3 >> 8;
          *(ulong *)param_1 = uVar9;
          uVar7 = *(ulong *)(CRC64::s_t + (uVar9 & 0xff) * 8) ^ uVar7 >> 8;
          *(ulong *)param_1 = uVar7;
          puVar4 = (uint *)((long)puVar4 + 2);
        } while (iVar5 != 0);
      }
    }
    else if (iVar5 != 0) {
      uVar7 = *(ulong *)param_1;
      do {
        uVar2 = *puVar4;
        iVar5 = iVar5 + -1;
        uVar9 = uVar7 ^ (ulong)uVar2 & 0xff;
        *(ulong *)param_1 = uVar9;
        uVar7 = *(ulong *)(CRC64::s_t + (uVar9 & 0xff) * 8) ^ uVar7 >> 8;
        uVar9 = uVar7 ^ (ulong)(uVar2 >> 8) & 0xff;
        *(ulong *)param_1 = uVar9;
        uVar7 = *(ulong *)(CRC64::s_t + (uVar9 & 0xff) * 8) ^ uVar7 >> 8;
        uVar9 = uVar7 ^ (ulong)(uVar2 >> 0x10) & 0xff;
        *(ulong *)param_1 = uVar9;
        uVar7 = *(ulong *)(CRC64::s_t + (uVar9 & 0xff) * 8) ^ uVar7 >> 8;
        uVar9 = uVar7 ^ uVar2 >> 0x18;
        *(ulong *)param_1 = uVar9;
        uVar7 = *(ulong *)(CRC64::s_t + (uVar9 & 0xff) * 8) ^ uVar7 >> 8;
        *(ulong *)param_1 = uVar7;
        puVar4 = puVar4 + 1;
      } while (iVar5 != 0);
    }
  }
  uVar2 = *(uint *)(this + 0x78);
  uVar7 = (ulong)uVar2;
  uVar9 = *(ulong *)param_1;
  uVar8 = uVar9 ^ uVar7 & 0xff;
  *(ulong *)param_1 = uVar8;
  uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
  uVar8 = uVar9 ^ (ulong)(uVar2 >> 8) & 0xff;
  *(ulong *)param_1 = uVar8;
  uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
  uVar8 = uVar9 ^ (ulong)(uVar2 >> 0x10) & 0xff;
  *(ulong *)param_1 = uVar8;
  uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
  uVar8 = uVar9 ^ uVar2 >> 0x18;
  *(ulong *)param_1 = uVar8;
  uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
  *(ulong *)param_1 = uVar9;
  if (uVar2 != 0) {
    plVar6 = *(long **)(this + 0x80);
    do {
      uVar7 = uVar7 - 1;
      uVar2 = *(uint *)(*plVar6 + 8);
      uVar1 = *(uint *)(*plVar6 + 0xc);
      uVar8 = uVar9 ^ (ulong)uVar2 & 0xff;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ (ulong)(uVar2 >> 8) & 0xff;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ (ulong)(uVar2 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ uVar2 >> 0x18;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ (ulong)uVar1 & 0xff;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ (ulong)(uVar1 >> 8) & 0xff;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ (ulong)(uVar1 >> 0x10) & 0xff;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      uVar8 = uVar9 ^ uVar1 >> 0x18;
      *(ulong *)param_1 = uVar8;
      uVar9 = *(ulong *)(CRC64::s_t + (uVar8 & 0xff) * 8) ^ uVar9 >> 8;
      *(ulong *)param_1 = uVar9;
      plVar6 = plVar6 + 1;
    } while (uVar7 != 0);
  }
  return;
}


