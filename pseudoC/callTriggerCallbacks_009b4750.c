// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callTriggerCallbacks
// Entry Point: 009b4750
// Size: 672 bytes
// Signature: undefined __thiscall callTriggerCallbacks(Bt2PhysicsOverlapCallback * this, vector * param_1)


/* Bt2PhysicsOverlapCallback::callTriggerCallbacks(std::__ndk1::vector<ITriggerReport*,
   std::__ndk1::allocator<ITriggerReport*> > const&) */

void __thiscall
Bt2PhysicsOverlapCallback::callTriggerCallbacks(Bt2PhysicsOverlapCallback *this,vector *param_1)

{
  long lVar1;
  Bt2PhysicsOverlapCallback *this_00;
  void *__dest;
  ulonglong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  void *__src;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  this_00 = this;
  if (*(int *)(this + 0x30) != 0) {
    uVar9 = 0;
    do {
      lVar3 = *(long *)(this + 0x28);
      uVar10 = (ulong)uVar9;
      plVar8 = (long *)(lVar3 + (ulong)uVar9 * 0x18);
      uVar6 = *(uint *)(*plVar8 + 0x18) | *(int *)(plVar8[1] + 0x18) << 0x10;
      uVar6 = uVar6 + (uVar6 << 0xf ^ 0xffffffff);
      uVar6 = (uVar6 ^ uVar6 >> 10) * 9;
      uVar6 = uVar6 ^ uVar6 >> 6;
      uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
      uVar6 = *(uint *)(*(long *)(this + 0x38) +
                       (ulong)((uVar6 ^ uVar6 >> 0x10) & *(int *)(this + 0x10) - 1U) * 4);
      if (uVar6 != 0xffffffff) {
        lVar7 = *(long *)(this + 0x18);
        do {
          lVar12 = (long)(int)uVar6;
          if ((*(uint *)(*(long *)(lVar7 + (-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 |
                                           (ulong)uVar6 << 5)) + 0x18) == *(uint *)(*plVar8 + 0x18))
             && (lVar1 = lVar7 + lVar12 * 0x20,
                *(int *)(*(long *)(lVar1 + 8) + 0x18) == *(int *)(plVar8[1] + 0x18))) {
            uVar13 = *(ulong *)(lVar1 + 0x10);
            if (uVar13 != 0) {
              puVar11 = (ulong *)(lVar3 + uVar10 * 0x18 + 0x10);
              uVar14 = *puVar11;
              uVar10 = uVar13 & (uVar14 ^ 0xffffffffffffffff);
              if (uVar10 != 0) {
                this_00 = (Bt2PhysicsOverlapCallback *)
                          callTriggerReports(this_00,(Overlap *)plVar8,uVar10,1,param_1);
              }
              uVar10 = uVar14 & (uVar13 ^ 0xffffffffffffffff);
              if (uVar10 != 0) {
                this_00 = (Bt2PhysicsOverlapCallback *)
                          callTriggerReports(this_00,(Overlap *)plVar8,uVar10,2,param_1);
              }
              if ((uVar14 & uVar13) != 0) {
                this_00 = (Bt2PhysicsOverlapCallback *)
                          callTriggerReports(this_00,(Overlap *)plVar8,uVar14 & uVar13,4,param_1);
              }
              uVar9 = uVar9 + 1;
              lVar3 = *(long *)(this + 0x18) + lVar12 * 0x20;
              *puVar11 = *(ulong *)(lVar3 + 0x10);
              *(undefined8 *)(lVar3 + 0x10) = 0;
              goto LAB_009b47a4;
            }
            break;
          }
          uVar6 = *(uint *)(lVar7 + lVar12 * 0x20 + 0x18);
        } while (uVar6 != 0xffffffff);
      }
      this_00 = (Bt2PhysicsOverlapCallback *)
                callTriggerReports(this_00,(Overlap *)plVar8,
                                   *(ulonglong *)(lVar3 + uVar10 * 0x18 + 0x10),2,param_1);
      uVar6 = *(int *)(this + 0x30) - 1;
      *(uint *)(this + 0x30) = uVar6;
      if (uVar9 < uVar6) {
        puVar4 = (undefined8 *)(*(long *)(this + 0x28) + (ulong)uVar6 * 0x18);
        puVar5 = (undefined8 *)(*(long *)(this + 0x28) + uVar10 * 0x18);
        uVar16 = puVar4[1];
        uVar15 = *puVar4;
        puVar5[2] = puVar4[2];
        puVar5[1] = uVar16;
        *puVar5 = uVar15;
      }
LAB_009b47a4:
    } while (uVar9 < *(uint *)(this + 0x30));
  }
  uVar9 = *(uint *)(this + 0xc);
  if (*(uint *)(this + 0x34) < uVar9) {
    __src = *(void **)(this + 0x28);
    __dest = (void *)btAlignedAllocInternal((long)*(int *)(this + 0x10) * 0x18,0x10);
    *(void **)(this + 0x28) = __dest;
    if (*(uint *)(this + 0x30) != 0) {
      memcpy(__dest,__src,(ulong)*(uint *)(this + 0x30) * 0x18);
    }
    this_00 = (Bt2PhysicsOverlapCallback *)btAlignedFreeInternal(__src);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x10);
  }
  else if (uVar9 == 0) {
    return;
  }
  uVar6 = 0;
  lVar3 = *(long *)(this + 0x18);
  do {
    uVar2 = *(ulonglong *)(lVar3 + (long)(int)uVar6 * 0x20 + 0x10);
    if (uVar2 != 0) {
      lVar7 = (long)(int)uVar6 * 0x20;
      this_00 = (Bt2PhysicsOverlapCallback *)
                callTriggerReports(this_00,(Overlap *)(lVar3 + lVar7),uVar2,1,param_1);
      puVar4 = (undefined8 *)(*(long *)(this + 0x18) + lVar7);
      puVar5 = (undefined8 *)(*(long *)(this + 0x28) + (ulong)*(uint *)(this + 0x30) * 0x18);
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) + 1;
      uVar16 = puVar4[1];
      uVar15 = *puVar4;
      puVar5[2] = puVar4[2];
      puVar5[1] = uVar16;
      *puVar5 = uVar15;
      lVar3 = *(long *)(this + 0x18);
      *(undefined8 *)(lVar3 + lVar7 + 0x10) = 0;
    }
    uVar6 = uVar6 + 1;
  } while (uVar9 != uVar6);
  return;
}


