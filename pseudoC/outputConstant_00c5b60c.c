// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputConstant
// Entry Point: 00c5b60c
// Size: 588 bytes
// Signature: undefined __cdecl outputConstant(AST_ConstantNode * param_1, AST_Traverser * param_2)


/* TIRDebugUtil::OutputTraverser::outputConstant(AST_ConstantNode*, AST_Traverser*) */

void TIRDebugUtil::OutputTraverser::outputConstant(AST_ConstantNode *param_1,AST_Traverser *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  basic_string *pbVar6;
  long lVar7;
  undefined auStack_1dc [300];
  undefined auStack_b0 [64];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  if (0 < (int)((ulong)(lVar2 - lVar1) >> 3)) {
    lVar7 = 0;
    pbVar6 = *(basic_string **)(param_2 + 0x50);
    do {
      outputTreeText(pbVar6,(AST_Node *)param_1,*(int *)(param_2 + 0x48));
      FUN_00c5aa20(auStack_1dc,300,"%p CONST ",param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pbVar6);
      lVar5 = *(long *)(param_1 + 0x48);
      switch(*(undefined4 *)(lVar5 + lVar7)) {
      case 3:
        pcVar4 = "%f (const float)\n";
        goto LAB_00c5b7ac;
      case 4:
        pcVar4 = "%f (const half)\n";
LAB_00c5b7ac:
        FUN_00c5aa20((double)*(float *)(lVar5 + lVar7 + 4),auStack_1dc,300,pcVar4);
        goto LAB_00c5b6ac;
      case 5:
        pcVar4 = "%d (const int)\n";
        break;
      case 6:
        pcVar4 = "%u (const uint)\n";
        break;
      case 7:
        pcVar4 = "%d (const int16_t)\n";
        break;
      case 8:
        pcVar4 = "%u (const uint16_t)\n";
        break;
      case 9:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)pbVar6);
        goto LAB_00c5b6ac;
      default:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)pbVar6);
        if (*(long *)(param_1 + 8) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)pbVar6);
        }
        if (0 < *(int *)(param_1 + 0x10)) {
          FUN_00c5bb18(auStack_b0);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)pbVar6);
        goto LAB_00c5b6ac;
      }
      FUN_00c5aa20(auStack_1dc,300,pcVar4,*(undefined4 *)(lVar5 + lVar7 + 4));
LAB_00c5b6ac:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)pbVar6);
      lVar7 = lVar7 + 8;
    } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) * 8 - lVar7 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


