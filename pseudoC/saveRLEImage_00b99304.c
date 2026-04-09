// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveRLEImage
// Entry Point: 00b99304
// Size: 568 bytes
// Signature: undefined __cdecl saveRLEImage(char * param_1, BitVector * param_2, uint param_3, uint param_4, uint param_5, bool param_6)


/* RLEUtil::saveRLEImage(char const*, BitVector const*, unsigned int, unsigned int, unsigned int,
   bool) */

undefined4
RLEUtil::saveRLEImage
          (char *param_1,BitVector *param_2,uint param_3,uint param_4,uint param_5,bool param_6)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;
  uint local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  byte bStack_60;
  uint local_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x10))();
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uStack_68._0_1_ = (undefined)(param_3 >> 0x18);
      uVar3 = (undefined)uStack_68;
      uVar2 = (undefined)(param_4 >> 0x18);
      if (param_6) {
        if (param_5 < 9) {
          local_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedBufferOutput<unsigned_char>>
                    (param_2,param_4 * param_3,param_5,param_5,(CompressedBufferOutput *)&local_70,
                     false);
          pvVar7 = (void *)CONCAT44(uStack_6c,local_70);
          uVar8 = uStack_68;
        }
        else if (param_5 < 0x11) {
          local_70 = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedBufferOutput<unsigned_short>>
                    (param_2,param_4 * param_3,param_5,param_5,(CompressedBufferOutput *)&local_70,
                     false);
          pvVar7 = (void *)CONCAT44(uStack_6c,local_70);
          uVar8 = uStack_68 << 1;
        }
        else {
          pvVar7 = (void *)0x0;
          uVar8 = 0;
        }
        uVar6 = 1;
        uStack_68 = CONCAT31((int3)param_4,uVar3);
        local_70 = 0x454c5247;
        uStack_64._1_3_ = (undefined3)(param_5 + 7 >> 3);
        uStack_64 = CONCAT31(uStack_64._1_3_,uVar2);
        bStack_60 = (byte)(param_5 + 7 >> 0x1b);
        uStack_6c = CONCAT31((int3)param_3,1);
        local_5f = uVar8;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_70,0x15);
        (**(code **)(*plVar4 + 0x30))(plVar4,pvVar7,uVar8);
        if (pvVar7 != (void *)0x0) {
          operator_delete__(pvVar7);
          uVar6 = 1;
        }
      }
      else {
        local_74 = 0;
        (**(code **)(*plVar4 + 0x38))(plVar4,0x15);
        encode(param_2,param_4 * param_3,param_5,param_5,(File *)plVar4,&local_74);
        (**(code **)(*plVar4 + 0x38))(plVar4,0);
        uVar6 = 1;
        uStack_68 = CONCAT31((int3)param_4,(undefined)uStack_68);
        uStack_64._1_3_ = (undefined3)(param_5 + 7 >> 3);
        uStack_64 = CONCAT31(uStack_64._1_3_,uVar2);
        bStack_60 = (byte)(param_5 + 7 >> 0x1b);
        local_70 = 0x454c5247;
        local_5f = local_74;
        uStack_6c = CONCAT31((int3)param_3,1);
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_70,0x15);
      }
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


