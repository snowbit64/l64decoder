// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcCopyPolyMesh
// Entry Point: 00de1ac0
// Size: 464 bytes
// Signature: undefined __cdecl rcCopyPolyMesh(rcContext * param_1, rcPolyMesh * param_2, rcPolyMesh * param_3)


/* rcCopyPolyMesh(rcContext*, rcPolyMesh const&, rcPolyMesh&) */

undefined8 rcCopyPolyMesh(rcContext *param_1,rcPolyMesh *param_2,rcPolyMesh *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_3 + 0x28) = uVar9;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_3 + 0x3c) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x58);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  *(undefined4 *)(param_3 + 0x34) = uVar3;
  *(undefined4 *)(param_3 + 0x58) = uVar7;
  *(undefined4 *)(param_3 + 0x40) = uVar8;
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  pvVar4 = (void *)rcAlloc(iVar1 * 6,0);
  *(void **)param_3 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pcVar5 = "rcCopyPolyMesh: Out of memory \'dst.verts\' (%d).";
    uVar6 = (ulong)(uint)(*(int *)(param_2 + 0x28) * 3);
  }
  else {
    memcpy(pvVar4,*(void **)param_2,(long)*(int *)(param_2 + 0x28) * 6);
    pvVar4 = (void *)rcAlloc(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x34) * 4,0);
    *(void **)(param_3 + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      pcVar5 = "rcCopyPolyMesh: Out of memory \'dst.polys\' (%d).";
      uVar6 = (ulong)(uint)(*(int *)(param_2 + 0x2c) * *(int *)(param_2 + 0x34) * 2);
    }
    else {
      memcpy(pvVar4,*(void **)(param_2 + 8),
             (long)*(int *)(param_2 + 0x2c) * (long)*(int *)(param_2 + 0x34) * 4);
      pvVar4 = (void *)rcAlloc(*(int *)(param_2 + 0x2c) << 1,0);
      *(void **)(param_3 + 0x10) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        uVar6 = (ulong)*(uint *)(param_2 + 0x2c);
        pcVar5 = "rcCopyPolyMesh: Out of memory \'dst.regs\' (%d).";
      }
      else {
        memcpy(pvVar4,*(void **)(param_2 + 0x10),(long)*(int *)(param_2 + 0x2c) << 1);
        pvVar4 = (void *)rcAlloc(*(int *)(param_2 + 0x2c),0);
        *(void **)(param_3 + 0x20) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          uVar6 = (ulong)*(uint *)(param_2 + 0x2c);
          pcVar5 = "rcCopyPolyMesh: Out of memory \'dst.areas\' (%d).";
        }
        else {
          memcpy(pvVar4,*(void **)(param_2 + 0x20),(long)*(int *)(param_2 + 0x2c));
          pvVar4 = (void *)rcAlloc(*(int *)(param_2 + 0x2c) << 1,0);
          *(void **)(param_3 + 0x18) = pvVar4;
          if (pvVar4 != (void *)0x0) {
            memcpy(pvVar4,*(void **)(param_2 + 0x18),(long)*(int *)(param_2 + 0x2c));
            return 1;
          }
          uVar6 = (ulong)*(uint *)(param_2 + 0x2c);
          pcVar5 = "rcCopyPolyMesh: Out of memory \'dst.flags\' (%d).";
        }
      }
    }
  }
  rcContext::log((rcLogCategory)param_1,(char *)0x3,pcVar5,uVar6);
  return 0;
}


