// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDuplicateObjectAndRules
// Entry Point: 009d1844
// Size: 1320 bytes
// Signature: undefined removeDuplicateObjectAndRules(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::removeDuplicateObjectAndRules() */

void ProceduralPlacementManager::removeDuplicateObjectAndRules(void)

{
  byte bVar1;
  size_t sVar2;
  long lVar3;
  long in_x0;
  basic_string *pbVar4;
  long **pplVar5;
  byte **ppbVar6;
  byte *pbVar7;
  basic_string local_78 [4];
  void *local_68;
  __tree_node **local_60;
  __tree_node *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pplVar5 = *(long ***)(in_x0 + 0x50);
  local_58 = (__tree_node *)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  if (pplVar5 != *(long ***)(in_x0 + 0x58)) {
    do {
                    /* try { // try from 009d18a8 to 009d18af has its CatchHandler @ 009d1dac */
      (**(code **)(**pplVar5 + 0x78))(local_78);
                    /* try { // try from 009d18b0 to 009d18bf has its CatchHandler @ 009d1d94 */
      pbVar4 = local_78;
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_60,pbVar4);
      if (((ulong)pbVar4 & 1) == 0) {
        if (*pplVar5 != (long *)0x0) {
          (**(code **)(**pplVar5 + 8))();
        }
        sVar2 = *(long *)(in_x0 + 0x58) - (long)(pplVar5 + 1);
        if (sVar2 != 0) {
          memmove(pplVar5,pplVar5 + 1,sVar2);
        }
        *(size_t *)(in_x0 + 0x58) = (long)pplVar5 + sVar2;
      }
      else {
        pplVar5 = pplVar5 + 1;
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    } while (pplVar5 != *(long ***)(in_x0 + 0x58));
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_60,local_58);
  pplVar5 = *(long ***)(in_x0 + 0x68);
  local_58 = (__tree_node *)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  if (pplVar5 != *(long ***)(in_x0 + 0x70)) {
    do {
                    /* try { // try from 009d1960 to 009d1967 has its CatchHandler @ 009d1d90 */
      (**(code **)(**pplVar5 + 0x78))(local_78);
                    /* try { // try from 009d1968 to 009d1977 has its CatchHandler @ 009d1d8c */
      pbVar4 = local_78;
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_60,pbVar4);
      if (((ulong)pbVar4 & 1) == 0) {
        if (*pplVar5 != (long *)0x0) {
          (**(code **)(**pplVar5 + 8))();
        }
        sVar2 = *(long *)(in_x0 + 0x70) - (long)(pplVar5 + 1);
        if (sVar2 != 0) {
          memmove(pplVar5,pplVar5 + 1,sVar2);
        }
        *(size_t *)(in_x0 + 0x70) = (long)pplVar5 + sVar2;
      }
      else {
        pplVar5 = pplVar5 + 1;
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    } while (pplVar5 != *(long ***)(in_x0 + 0x70));
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_60,local_58);
  pplVar5 = *(long ***)(in_x0 + 0xb8);
  local_58 = (__tree_node *)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  if (pplVar5 != *(long ***)(in_x0 + 0xc0)) {
    do {
                    /* try { // try from 009d1a10 to 009d1a17 has its CatchHandler @ 009d1d88 */
      ProceduralPlacementRule::getSignature();
                    /* try { // try from 009d1a18 to 009d1a27 has its CatchHandler @ 009d1d84 */
      pbVar4 = local_78;
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_60,pbVar4);
      if (((ulong)pbVar4 & 1) == 0) {
        if (*pplVar5 != (long *)0x0) {
          (**(code **)(**pplVar5 + 8))();
        }
        sVar2 = *(long *)(in_x0 + 0xc0) - (long)(pplVar5 + 1);
        if (sVar2 != 0) {
          memmove(pplVar5,pplVar5 + 1,sVar2);
        }
        *(size_t *)(in_x0 + 0xc0) = (long)pplVar5 + sVar2;
      }
      else {
        pplVar5 = pplVar5 + 1;
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    } while (pplVar5 != *(long ***)(in_x0 + 0xc0));
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_60,local_58);
  ppbVar6 = *(byte ***)(in_x0 + 8);
  local_58 = (__tree_node *)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  if (ppbVar6 != *(byte ***)(in_x0 + 0x10)) {
    do {
                    /* try { // try from 009d1ac0 to 009d1ac7 has its CatchHandler @ 009d1d80 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_78);
                    /* try { // try from 009d1ac8 to 009d1ad7 has its CatchHandler @ 009d1d7c */
      pbVar4 = local_78;
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_60,pbVar4);
      if (((ulong)pbVar4 & 1) == 0) {
        pbVar7 = *ppbVar6;
        if (pbVar7 != (byte *)0x0) {
          if ((pbVar7[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + 0x28));
          }
          if ((*pbVar7 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + 0x10));
          }
          operator_delete(pbVar7);
        }
        sVar2 = *(long *)(in_x0 + 0x10) - (long)(ppbVar6 + 1);
        if (sVar2 != 0) {
          memmove(ppbVar6,ppbVar6 + 1,sVar2);
        }
        *(size_t *)(in_x0 + 0x10) = (long)ppbVar6 + sVar2;
      }
      else {
        ppbVar6 = ppbVar6 + 1;
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    } while (ppbVar6 != *(byte ***)(in_x0 + 0x10));
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_60,local_58);
  ppbVar6 = *(byte ***)(in_x0 + 0x20);
  local_58 = (__tree_node *)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  if (ppbVar6 != *(byte ***)(in_x0 + 0x28)) {
    do {
                    /* try { // try from 009d1b8c to 009d1b93 has its CatchHandler @ 009d1d78 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_78);
                    /* try { // try from 009d1b94 to 009d1ba3 has its CatchHandler @ 009d1d74 */
      pbVar4 = local_78;
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_60,pbVar4);
      if (((ulong)pbVar4 & 1) == 0) {
        pbVar7 = *ppbVar6;
        if (pbVar7 != (byte *)0x0) {
          if ((pbVar7[0x38] & 1) == 0) {
            if ((pbVar7[0x18] & 1) == 0) goto LAB_009d1bc0;
LAB_009d1c30:
            operator_delete(*(void **)(pbVar7 + 0x28));
            bVar1 = *pbVar7;
          }
          else {
            operator_delete(*(void **)(pbVar7 + 0x48));
            if ((pbVar7[0x18] & 1) != 0) goto LAB_009d1c30;
LAB_009d1bc0:
            bVar1 = *pbVar7;
          }
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + 0x10));
          }
          operator_delete(pbVar7);
        }
        sVar2 = *(long *)(in_x0 + 0x28) - (long)(ppbVar6 + 1);
        if (sVar2 != 0) {
          memmove(ppbVar6,ppbVar6 + 1,sVar2);
        }
        *(size_t *)(in_x0 + 0x28) = (long)ppbVar6 + sVar2;
      }
      else {
        ppbVar6 = ppbVar6 + 1;
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    } while (ppbVar6 != *(byte ***)(in_x0 + 0x28));
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_60,local_58);
  ppbVar6 = *(byte ***)(in_x0 + 0x38);
  local_58 = (__tree_node *)0x0;
  uStack_50 = 0;
  local_60 = &local_58;
  if (ppbVar6 != *(byte ***)(in_x0 + 0x40)) {
    do {
                    /* try { // try from 009d1c7c to 009d1c83 has its CatchHandler @ 009d1d70 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_78);
                    /* try { // try from 009d1c84 to 009d1c93 has its CatchHandler @ 009d1d6c */
      pbVar4 = local_78;
      std::__ndk1::
      __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((basic_string *)&local_60,pbVar4);
      if (((ulong)pbVar4 & 1) == 0) {
        pbVar7 = *ppbVar6;
        if (pbVar7 != (byte *)0x0) {
          if ((pbVar7[0x30] & 1) == 0) {
            if ((pbVar7[0x18] & 1) == 0) goto LAB_009d1cb0;
LAB_009d1d20:
            operator_delete(*(void **)(pbVar7 + 0x28));
            bVar1 = *pbVar7;
          }
          else {
            operator_delete(*(void **)(pbVar7 + 0x40));
            if ((pbVar7[0x18] & 1) != 0) goto LAB_009d1d20;
LAB_009d1cb0:
            bVar1 = *pbVar7;
          }
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + 0x10));
          }
          operator_delete(pbVar7);
        }
        sVar2 = *(long *)(in_x0 + 0x40) - (long)(ppbVar6 + 1);
        if (sVar2 != 0) {
          memmove(ppbVar6,ppbVar6 + 1,sVar2);
        }
        *(size_t *)(in_x0 + 0x40) = (long)ppbVar6 + sVar2;
      }
      else {
        ppbVar6 = ppbVar6 + 1;
      }
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    } while (ppbVar6 != *(byte ***)(in_x0 + 0x40));
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_60,local_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


