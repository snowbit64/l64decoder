// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateHeightMapTexture
// Entry Point: 008eafc8
// Size: 684 bytes
// Signature: undefined __thiscall updateHeightMapTexture(BaseTerrain * this, IRenderDevice * param_1)


/* BaseTerrain::updateHeightMapTexture(IRenderDevice*) */

void __thiscall BaseTerrain::updateHeightMapTexture(BaseTerrain *this,IRenderDevice *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  void *pvVar12;
  size_t __n;
  void *pvVar13;
  ulong uVar14;
  void *local_b8;
  uint local_b0;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = *(uint *)(this + 0x128);
  if (uVar7 != 0) {
    uVar1 = *(uint *)(this + 0x11c);
    uVar2 = *(uint *)(this + 0x118);
    plVar8 = *(long **)(*(long *)(this + 0x110) + 0x68);
    if (uVar7 == uVar1 * uVar1) {
      uVar9 = (ulong)(uVar1 * uVar2);
      uVar5 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      (**(code **)(*plVar8 + 0x68))(plVar8,uVar5,0,0,0,0,uVar9,uVar9,0,1,1,&local_b8);
      if (uVar1 * uVar2 != 0) {
        pvVar12 = *(void **)(this + 0x80);
        __n = uVar9 << 1;
        pvVar13 = local_b8;
        do {
          memcpy(pvVar13,pvVar12,__n);
          uVar1 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar1;
          pvVar13 = (void *)((long)pvVar13 + ((ulong)local_b0 & 0xfffffffe));
          pvVar12 = (void *)((long)pvVar12 + (ulong)*(uint *)(this + 0x90) * 2);
        } while (uVar1 != 0);
      }
      uVar5 = (**(code **)(*(long *)param_1 + 0x138))();
      (**(code **)(*plVar8 + 0x70))(plVar8,uVar5,&local_b8);
      memset(*(void **)(this + 0x120),0,(ulong)uVar7);
    }
    else if (uVar1 != 0) {
      uVar7 = 0;
      lVar6 = *(long *)(this + 0x120);
      do {
        uVar9 = 0;
        do {
          iVar11 = (int)uVar9;
          uVar14 = (ulong)(uVar7 * uVar1 + iVar11);
          if (*(char *)(lVar6 + uVar14) != '\0') {
            uVar5 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
            (**(code **)(*plVar8 + 0x68))
                      (plVar8,uVar5,0,0,uVar2 * iVar11,uVar7 * uVar2,uVar2 * iVar11 + uVar2,
                       uVar7 * uVar2 + uVar2,0,1,3,&local_b8);
            if (uVar2 != 0) {
              pvVar13 = (void *)(*(long *)(this + 0x80) +
                                (ulong)((iVar11 + *(int *)(this + 0x90) * uVar7) * uVar2) * 2);
              uVar10 = (ulong)uVar2;
              pvVar12 = local_b8;
              do {
                memcpy(pvVar12,pvVar13,(ulong)uVar2 << 1);
                uVar3 = (int)uVar10 - 1;
                uVar10 = (ulong)uVar3;
                pvVar12 = (void *)((long)pvVar12 + ((ulong)local_b0 & 0xfffffffe));
                pvVar13 = (void *)((long)pvVar13 + (ulong)*(uint *)(this + 0x90) * 2);
              } while (uVar3 != 0);
            }
            uVar5 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
            (**(code **)(*plVar8 + 0x70))(plVar8,uVar5,&local_b8);
            lVar6 = *(long *)(this + 0x120);
            *(undefined *)(lVar6 + uVar14) = 0;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar1);
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    *(undefined4 *)(this + 0x128) = 0;
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


