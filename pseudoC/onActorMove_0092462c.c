// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onActorMove
// Entry Point: 0092462c
// Size: 348 bytes
// Signature: undefined __thiscall onActorMove(DestructionShape * this, uint param_1, Matrix4x4 * param_2, int param_3, float * param_4)


/* DestructionShape::onActorMove(unsigned int, Matrix4x4 const&, int, float*) */

void __thiscall
DestructionShape::onActorMove
          (DestructionShape *this,uint param_1,Matrix4x4 *param_2,int param_3,float *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  UpdateManager *this_00;
  void *__src;
  void *__src_00;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(uint *)(this + 0x354) <= *(uint *)(this + 0x350)) {
    uVar3 = *(uint *)(this + 0x354) << 1;
    if (uVar3 < 0xd) {
      uVar3 = 0xc;
    }
    __src_00 = *(void **)(this + 0x340);
    __src = *(void **)(this + 0x348);
    *(uint *)(this + 0x354) = uVar3;
    posix_memalign(&local_60,0x10,(ulong)uVar3 << 6);
    *(void **)(this + 0x340) = local_60;
    pvVar5 = operator_new__((ulong)*(uint *)(this + 0x354) << 4);
    *(void **)(this + 0x348) = pvVar5;
    if (*(uint *)(this + 0x350) != 0) {
      memcpy(local_60,__src_00,(ulong)*(uint *)(this + 0x350) << 6);
      free(__src_00);
      memcpy(*(void **)(this + 0x348),__src,(ulong)*(uint *)(this + 0x350) << 4);
      if (__src != (void *)0x0) {
        operator_delete__(__src);
      }
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = (undefined8 *)(*(long *)(this + 0x340) + (ulong)(uint)(*(int *)(this + 0x350) << 4) * 4);
  uVar12 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)param_2;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  puVar1[5] = *(undefined8 *)(param_2 + 0x28);
  puVar1[4] = uVar8;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[1] = uVar12;
  *puVar1 = uVar11;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  uVar3 = *(uint *)(this + 0x350);
  piVar2 = (int *)(*(long *)(this + 0x348) + (ulong)uVar3 * 0x10);
  *piVar2 = param_3;
  piVar2[1] = (int)*param_4;
  piVar2[2] = (int)param_4[1];
  piVar2[3] = (int)param_4[2];
  *(uint *)(this + 0x350) = uVar3 + 1;
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x218),true);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


