// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputTree
// Entry Point: 00c5a7bc
// Size: 192 bytes
// Signature: undefined __cdecl outputTree(AST_Node * param_1, basic_string * param_2)


/* TIRDebugUtil::outputTree(AST_Node*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void TIRDebugUtil::outputTree(AST_Node *param_1,basic_string *param_2)

{
  long lVar1;
  code *local_80;
  code *pcStack_78;
  code *local_70;
  code *pcStack_68;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  code *pcStack_48;
  code *local_40;
  undefined4 local_38;
  undefined2 local_34;
  basic_string *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (AST_Node *)0x0) {
    local_34 = 1;
    local_70 = OutputTraverser::outputConstant;
    pcStack_68 = OutputTraverser::outputBinary;
    local_80 = OutputTraverser::outputDeclaration;
    pcStack_78 = OutputTraverser::outputSymbol;
    local_60 = OutputTraverser::outputUnary;
    pcStack_58 = OutputTraverser::outputSelection;
    local_38 = 0;
    local_50 = OutputTraverser::outputAggregate;
    pcStack_48 = OutputTraverser::outputLoop;
    local_40 = OutputTraverser::outputBranch;
    local_30 = param_2;
    (***(code ***)param_1)(param_1,&local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


