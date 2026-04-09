// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMicroChunk
// Entry Point: 00d5b500
// Size: 304 bytes
// Signature: undefined __thiscall addMicroChunk(MyMicroAllocator * this, uchar * param_1, uchar * param_2, MemoryChunk * param_3)


/* HACD::MyMicroAllocator::addMicroChunk(unsigned char*, unsigned char*, HACD::MemoryChunk*) */

void __thiscall
HACD::MyMicroAllocator::addMicroChunk
          (MyMicroAllocator *this,uchar *param_1,uchar *param_2,MemoryChunk *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  code **ppcVar6;
  uchar **ppuVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = *(uint *)(this + 0x848);
  if (*(uint *)(this + 0x84c) < uVar3) {
    lVar2 = *(long *)(this + 0x858);
    uVar3 = *(uint *)(this + 0x84c);
  }
  else if (uVar3 == 0) {
    ppcVar6 = (code **)**(undefined8 **)(this + 0x10);
    *(undefined4 *)(this + 0x848) = 0x40;
    lVar2 = (**ppcVar6)(*(undefined8 **)(this + 0x10),0x800);
    *(long *)(this + 0x858) = lVar2;
    uVar3 = *(uint *)(this + 0x84c);
  }
  else {
    lVar2 = **(long **)(this + 0x10);
    *(uint *)(this + 0x848) = uVar3 << 1;
    lVar2 = (**(code **)(lVar2 + 0x10))
                      (*(long **)(this + 0x10),*(undefined8 *)(this + 0x858),
                       (ulong)(uVar3 << 1) << 5);
    *(long *)(this + 0x858) = lVar2;
    uVar3 = *(uint *)(this + 0x84c);
  }
  uVar4 = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    uVar8 = 0;
    lVar9 = uVar4 * 0x20;
    do {
      if (param_2 < *(uchar **)(lVar2 + lVar5)) {
        if ((uint)uVar8 < uVar3) {
          do {
            puVar1 = (undefined8 *)(lVar2 + lVar9);
            uVar4 = uVar4 - 1;
            lVar9 = lVar9 + -0x20;
            puVar1[1] = puVar1[-3];
            *puVar1 = puVar1[-4];
            puVar1[3] = puVar1[-1];
            puVar1[2] = puVar1[-2];
            lVar2 = *(long *)(this + 0x858);
          } while (uVar8 < uVar4);
          uVar3 = *(uint *)(this + 0x84c);
        }
        ppuVar7 = (uchar **)(lVar2 + lVar5);
        goto LAB_00d5b604;
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar9 - lVar5 != 0);
  }
  ppuVar7 = (uchar **)(lVar2 + uVar4 * 0x20);
LAB_00d5b604:
  *ppuVar7 = param_1;
  ppuVar7[1] = param_2;
  ppuVar7[2] = (uchar *)param_3;
  *(uchar ***)(this + 0x850) = ppuVar7;
  *(uint *)(this + 0x84c) = uVar3 + 1;
  ppuVar7[3] = (uchar *)0x0;
  return;
}


