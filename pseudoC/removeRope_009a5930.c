// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRope
// Entry Point: 009a5930
// Size: 320 bytes
// Signature: undefined __thiscall removeRope(Bt2ScenegraphPhysicsContext * this, uint param_1)


/* Bt2ScenegraphPhysicsContext::removeRope(unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::removeRope(Bt2ScenegraphPhysicsContext *this,uint param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  ulong uVar8;
  long *plVar9;
  Bt2Rope *this_00;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_50;
  ulong uVar12;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x2b8);
  if (uVar4 != 0) {
    uVar5 = (ulong)param_1;
    uVar11 = NEON_cnt(uVar4,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    if ((uVar12 & 0xffffffff) < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & param_1);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    pplVar7 = *(long ***)(*(long *)(this + 0x2b0) + uVar6 * 8);
    if ((pplVar7 != (long **)0x0) && (plVar9 = *pplVar7, plVar9 != (long *)0x0)) {
      do {
        uVar8 = plVar9[1];
        if (uVar8 == uVar5) {
          if (*(uint *)(plVar9 + 2) == param_1) {
            Bt2Rope::removeFromScene((Bt2Rope *)plVar9[3],this);
            this_00 = (Bt2Rope *)plVar9[3];
            if (this_00 != (Bt2Rope *)0x0) {
              Bt2Rope::~Bt2Rope(this_00);
                    /* try { // try from 009a5a20 to 009a5a27 has its CatchHandler @ 009a5a70 */
              btAlignedFreeInternal(this_00);
            }
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>>>
            ::remove((__hash_const_iterator)(this + 0x2b0));
            if (local_50 != (void *)0x0) {
              operator_delete(local_50);
            }
            break;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else if (uVar4 <= uVar8) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar1 * uVar4;
          }
          if (uVar8 != uVar6) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


