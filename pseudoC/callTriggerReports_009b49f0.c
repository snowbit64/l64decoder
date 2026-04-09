// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callTriggerReports
// Entry Point: 009b49f0
// Size: 368 bytes
// Signature: undefined __thiscall callTriggerReports(Bt2PhysicsOverlapCallback * this, Overlap * param_1, ulonglong param_2, TRIGGER_FLAGS param_3, vector * param_4)


/* Bt2PhysicsOverlapCallback::callTriggerReports(Bt2PhysicsOverlapCallback::Overlap const&, unsigned
   long long, ITriggerReport::TRIGGER_FLAGS, std::__ndk1::vector<ITriggerReport*,
   std::__ndk1::allocator<ITriggerReport*> > const&) */

Bt2PhysicsOverlapCallback * __thiscall
Bt2PhysicsOverlapCallback::callTriggerReports
          (Bt2PhysicsOverlapCallback *this,Overlap *param_1,ulonglong param_2,TRIGGER_FLAGS param_3,
          vector *param_4)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  ulong uVar11;
  
  puVar8 = *(uint **)(**(long **)param_1 + 0x108);
  uVar4 = *puVar8;
  if ((uVar4 >> 8 & 1) == 0) {
    puVar9 = *(uint **)(**(long **)(param_1 + 8) + 0x108);
    uVar1 = *puVar9;
    if ((uVar1 >> 8 & 1) == 0) {
      lVar5 = *(long *)param_4;
      if ((param_3 != 4) || ((uVar4 >> 6 & 1) != 0)) {
        uVar6 = *(long *)(param_4 + 8) - lVar5;
        iVar10 = (int)(uVar6 >> 3);
        if ((uVar1 >> 7 & 1) == 0) {
          if ((uVar1 >> 3 & 1) == 0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = puVar9[8];
          }
          if (iVar10 != 0) {
            for (lVar7 = 0;
                (plVar3 = *(long **)(lVar5 + lVar7 * 8),
                this = (Bt2PhysicsOverlapCallback *)
                       (**(code **)(*plVar3 + 0x10))
                                 (plVar3,*(undefined8 *)(puVar8 + 2),*(undefined8 *)(puVar9 + 2),
                                  *(undefined8 *)(puVar9 + 2),param_3,uVar4), ((ulong)this & 1) == 0
                && (lVar7 + 1U < (uVar6 >> 3 & 0xffffffff))); lVar7 = lVar7 + 1) {
              lVar5 = *(long *)param_4;
            }
          }
        }
        else if (param_2 != 0) {
          lVar5 = 0;
          do {
            if (((param_2 & 1) != 0) &&
               (lVar7 = *(long *)(*(long *)(puVar9 + 6) + lVar5 * 0x10), lVar7 != 0)) {
              if (iVar10 != 0) {
                uVar11 = 0;
                do {
                  plVar3 = *(long **)(*(long *)param_4 + uVar11 * 8);
                  this = (Bt2PhysicsOverlapCallback *)
                         (**(code **)(*plVar3 + 0x10))
                                   (plVar3,*(undefined8 *)(puVar8 + 2),*(undefined8 *)(puVar9 + 2),
                                    lVar7,param_3,0xffffffff);
                  if (((ulong)this & 1) != 0) break;
                  uVar11 = uVar11 + 1;
                } while (uVar11 < (uVar6 >> 3 & 0xffffffff));
                uVar4 = *puVar8;
              }
              if ((uVar4 >> 8 & 1) != 0) {
                return this;
              }
              if ((*(byte *)((long)puVar9 + 1) & 1) != 0) {
                return this;
              }
            }
            bVar2 = 1 < param_2;
            lVar5 = lVar5 + 1;
            param_2 = param_2 >> 1;
          } while (bVar2);
        }
      }
    }
  }
  return this;
}


