// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeConnection
// Entry Point: 00b16710
// Size: 392 bytes
// Signature: undefined __thiscall removeConnection(VoiceChatManager * this, uint param_1)


/* VoiceChatManager::removeConnection(unsigned int) */

void __thiscall VoiceChatManager::removeConnection(VoiceChatManager *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_90;
  uint local_88;
  undefined8 *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 0x1498);
  lVar7 = *(long *)(this + 0x1490);
  if (lVar3 - lVar7 != 0) {
    uVar6 = 0;
    uVar4 = (lVar3 - lVar7 >> 4) * 0x6db6db6db6db6db7;
    do {
      iVar5 = (int)uVar6;
      if (*(uint *)(lVar7 + uVar6 * 0x70 + 0x4c) == param_1) {
        if (iVar5 != -1) {
          if (lVar3 != lVar7) {
            uVar4 = 0;
            do {
              uVar1 = *(uint *)(lVar7 + uVar4 * 0x70 + 0x4c);
              if (uVar1 != param_1) {
                local_90 = 1;
                local_88 = uVar1;
                local_80 = (undefined8 *)operator_new(0x70);
                local_80[1] = 0;
                *local_80 = 0;
                local_80[3] = 0;
                local_80[2] = 0;
                local_80[5] = 0;
                local_80[4] = 0;
                local_80[7] = 0;
                local_80[6] = 0;
                local_80[9] = 0;
                local_80[8] = 0;
                local_80[0xb] = 0;
                local_80[10] = 0;
                local_80[0xd] = 0;
                local_80[0xc] = 0;
                local_80[6] = local_80 + 7;
                *(undefined *)((long)local_80 + 0x6c) =
                     *(undefined *)(lVar7 + (long)iVar5 * 0x70 + 0x6c);
                FUN_00b165dc(this + 0x1518,&local_90);
                lVar3 = *(long *)(this + 0x1498);
                lVar7 = *(long *)(this + 0x1490);
              }
              uVar4 = (ulong)((int)uVar4 + 1);
              uVar6 = (lVar3 - lVar7 >> 4) * 0x6db6db6db6db6db7;
            } while (uVar4 <= uVar6 && uVar6 - uVar4 != 0);
          }
          deleteConnection(this,iVar5);
        }
        break;
      }
      uVar6 = (ulong)(iVar5 + 1);
    } while (uVar6 <= uVar4 && uVar4 - uVar6 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


