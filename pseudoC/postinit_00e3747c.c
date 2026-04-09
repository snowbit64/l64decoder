// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postinit
// Entry Point: 00e3747c
// Size: 1120 bytes
// Signature: undefined __thiscall postinit(Soloud * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* SoLoud::Soloud::postinit(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
SoLoud::Soloud::postinit(Soloud *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  void *pvVar2;
  ulong *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  *(uint *)(this + 0x20a8) = param_4;
  *(undefined4 *)(this + 0x20c0) = 0x3f800000;
  if (param_4 - 1 < 6) {
    uVar4 = *(undefined4 *)(&DAT_0055f9c4 + (long)(int)(param_4 - 1) * 4);
  }
  else {
    uVar4 = 2;
  }
  uVar9 = param_2 + 3 & 0xfffffffc;
  *(undefined4 *)(this + 0x20a4) = uVar4;
  if (uVar9 < 0x1001) {
    uVar9 = 0x1000;
  }
  *(uint *)(this + 0x20a0) = param_1;
  *(uint *)(this + 0x20b8) = param_2;
  uVar1 = uVar9 * 9;
  *(uint *)(this + 0x70) = uVar9;
  *(uint *)(this + 0x74) = uVar9;
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x60));
    uVar9 = *(uint *)(this + 0x70);
  }
  *(uint *)(this + 0x68) = uVar1;
  pvVar2 = operator_new__((ulong)uVar1 * 4 + 0x40);
  *(ulong *)(this + 0x58) = (long)pvVar2 + 0x1fU & 0xffffffffffffffe0;
  *(void **)(this + 0x60) = pvVar2;
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  *(uint *)(this + 0x88) = uVar9 << 3;
  pvVar2 = operator_new__((ulong)(uVar9 << 3) * 4 + 0x40);
  *(ulong *)(this + 0x78) = (long)pvVar2 + 0x1fU & 0xffffffffffffffe0;
  *(void **)(this + 0x80) = pvVar2;
  lVar5 = *(long *)(this + 0x90);
  *(undefined8 *)(this + 0x3484) = 0;
  *(undefined8 *)(this + 0x347c) = 0;
  *(undefined8 *)(this + 0x3494) = 0;
  *(undefined8 *)(this + 0x348c) = 0;
  *(undefined8 *)(this + 0x34a4) = 0;
  *(undefined8 *)(this + 0x349c) = 0;
  *(undefined8 *)(this + 0x34b4) = 0;
  *(undefined8 *)(this + 0x34ac) = 0;
  *(undefined8 *)(this + 0x34c4) = 0;
  *(undefined8 *)(this + 0x34bc) = 0;
  *(undefined8 *)(this + 0x34d4) = 0;
  *(undefined8 *)(this + 0x34cc) = 0;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + -8);
    if (lVar6 != 0) {
      lVar6 = lVar6 * 0x18;
      do {
        pvVar2 = *(void **)(lVar5 + -0x10 + lVar6);
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
    operator_delete__((long *)(lVar5 + -8));
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  uVar9 = *(uint *)(this + 0x50);
  uVar10 = (ulong)uVar9;
  uVar11 = (ulong)(uVar9 << 1);
  puVar3 = (ulong *)operator_new__((uVar11 * 3 >> 1) << 4 | 8);
  puVar8 = puVar3 + 1;
  *puVar3 = uVar11;
  if (uVar9 << 1 != 0) {
    lVar5 = uVar11 * 0x18;
    puVar7 = puVar8;
    do {
      lVar5 = lVar5 + -0x18;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 3;
    } while (lVar5 != 0);
  }
  *(ulong **)(this + 0x90) = puVar8;
  pvVar2 = operator_new__(uVar10 << 3);
  *(void **)(this + 0x98) = pvVar2;
  if ((uVar9 & 0x7fffffff) != 0) {
    lVar5 = 0;
    uVar11 = 1;
    pvVar2 = (void *)puVar3[2];
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        uVar10 = (ulong)*(uint *)(this + 0x50);
      }
      *(undefined4 *)(puVar8 + 2) = 0x1200;
      pvVar2 = operator_new__(0x4840);
      uVar9 = (uint)uVar10;
      *puVar8 = (long)pvVar2 + 0x1fU & 0xffffffffffffffe0;
      puVar8[1] = (ulong)pvVar2;
      if (uVar9 << 1 <= uVar11) break;
      lVar5 = lVar5 + 0x18;
      uVar11 = uVar11 + 1;
      puVar8 = (ulong *)(*(long *)(this + 0x90) + lVar5);
      pvVar2 = (void *)puVar8[1];
    }
  }
  if (uVar9 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0x98) + lVar5) = 0;
      lVar5 = lVar5 + 8;
    } while ((ulong)uVar9 * 8 - lVar5 != 0);
  }
  *(uint *)(this + 0x20bc) = param_3;
  *(undefined4 *)(this + 0x20c4) = 0x3f733333;
  switch(*(undefined4 *)(this + 0x20a8)) {
  case 1:
    fVar12 = 0.0;
    fVar13 = 1.0;
    uVar9 = 0;
    break;
  case 2:
  case 3:
    setSpeakerPosition(this,0,2.0,0.0,1.0);
    fVar12 = -2.0;
    fVar13 = 1.0;
    uVar9 = 1;
    break;
  case 4:
    setSpeakerPosition(this,0,2.0,0.0,1.0);
    setSpeakerPosition(this,1,-2.0,0.0,1.0);
    setSpeakerPosition(this,2,2.0,0.0,-1.0);
    fVar12 = -2.0;
    fVar13 = -1.0;
    uVar9 = 3;
    break;
  case 5:
    setSpeakerPosition(this,0,2.0,0.0,1.0);
    setSpeakerPosition(this,1,-2.0,0.0,1.0);
    setSpeakerPosition(this,2,0.0,0.0,1.0);
    setSpeakerPosition(this,3,0.0,0.0,0.0);
    setSpeakerPosition(this,4,2.0,0.0,-1.0);
    fVar12 = -2.0;
    fVar13 = -1.0;
    uVar9 = 5;
    break;
  case 6:
    setSpeakerPosition(this,0,2.0,0.0,1.0);
    setSpeakerPosition(this,1,-2.0,0.0,1.0);
    setSpeakerPosition(this,2,0.0,0.0,1.0);
    setSpeakerPosition(this,3,0.0,0.0,0.0);
    setSpeakerPosition(this,4,2.0,0.0,0.0);
    setSpeakerPosition(this,5,-2.0,0.0,0.0);
    setSpeakerPosition(this,6,2.0,0.0,-1.0);
    fVar12 = -2.0;
    fVar13 = 1.0;
    uVar9 = 7;
    break;
  default:
    goto switchD_00e376c4_caseD_6;
  }
  setSpeakerPosition(this,uVar9,fVar12,0.0,fVar13);
switchD_00e376c4_caseD_6:
  mapResampleBuffers();
  return;
}


