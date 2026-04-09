// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutMultiple
// Entry Point: 00cd9598
// Size: 520 bytes
// Signature: undefined __thiscall NextPutMultiple(StreamTransformationFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::StreamTransformationFilter::NextPutMultiple(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::StreamTransformationFilter::NextPutMultiple
          (StreamTransformationFilter *this,uchar *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar3 = (**(code **)(**(long **)(this + 0xb8) + 0x28))();
    uVar3 = uVar3 & 0xffffffff;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    do {
      uVar1 = *(uint *)(this + 200);
      uVar6 = (ulong)uVar1;
      plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      local_70 = param_2;
      if (*(ulong *)(this + 0xa8) < uVar3) {
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x128))(plVar4,&DEFAULT_CHANNEL,&local_70);
        uVar7 = local_70;
        if (local_70 < uVar3) {
          uVar7 = *(ulong *)(this + 0xa8);
          pvVar5 = *(void **)(this + 0xb0);
          if (uVar7 != uVar6) {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined *)((long)pvVar5 + (uVar7 - 1)) = 0;
            }
            UnalignedDeallocate(pvVar5);
            if (uVar1 == 0) {
              pvVar5 = (void *)0x0;
            }
            else {
              pvVar5 = (void *)UnalignedAllocate(uVar6);
            }
            *(void **)(this + 0xb0) = pvVar5;
          }
          *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
          *(ulong *)(this + 0xa8) = uVar6;
          uVar7 = uVar6;
        }
      }
      else {
        pvVar5 = *(void **)(this + 0xb0);
        uVar7 = *(ulong *)(this + 0xa8);
      }
      uVar6 = param_2;
      if (uVar7 < param_2) {
        if (uVar7 == *(uint *)(this + 200)) {
          uVar6 = (**(code **)(**(long **)(this + 0xb8) + 0x38))();
          uVar7 = uVar7 - (uVar6 & 0xffffffff);
        }
        if ((int)CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) == 1) {
          uVar6 = uVar7 & -uVar3;
        }
        else {
          uVar6 = 0;
          if (uVar3 != 0) {
            uVar6 = uVar7 / uVar3;
          }
          uVar6 = uVar6 * uVar3;
        }
      }
      (**(code **)(**(long **)(this + 0xb8) + 0x48))(*(long **)(this + 0xb8),pvVar5,param_1,uVar6);
      plVar4 = (long *)(**(code **)(*(long *)this + 0x160))(this);
      (**(code **)(*plVar4 + 0x40))(plVar4,pvVar5,uVar6,0,1);
      param_1 = param_1 + uVar6;
      param_2 = param_2 - uVar6;
    } while (param_2 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


