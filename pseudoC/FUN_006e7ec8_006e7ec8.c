// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7ec8
// Entry Point: 006e7ec8
// Size: 260 bytes
// Signature: undefined FUN_006e7ec8(void)


void FUN_006e7ec8(long **param_1)

{
  long lVar1;
  bool bVar2;
  EngineManager *this;
  long *plVar3;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (void *)0x0;
  if (*(int *)(param_1 + 3) == 6) {
                    /* try { // try from 006e7f00 to 006e7f8f has its CatchHandler @ 006e7fcc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_40);
  }
  this = (EngineManager *)EngineManager::getInstance();
  bVar2 = true;
  switch(*(int *)(param_1 + 1)) {
  case 1:
  case 2:
    bVar2 = *(int *)param_1 == 0;
    break;
  case 3:
    bVar2 = *(char *)param_1 == '\0';
    break;
  case 4:
    bVar2 = *(float *)param_1 == 0.0;
    break;
  case 5:
    bVar2 = (double)*param_1 == 0.0;
    break;
  default:
    goto switchD_006e7f34_caseD_6;
  case 7:
  case 8:
    plVar3 = *param_1;
    goto LAB_006e7f64;
  case 0xd:
    if (*param_1 == (long *)0x0) {
      bVar2 = false;
      goto switchD_006e7f34_caseD_6;
    }
    plVar3 = (long *)**param_1;
LAB_006e7f64:
    bVar2 = plVar3 == (long *)0x0;
  }
  bVar2 = !bVar2;
switchD_006e7f34_caseD_6:
  EngineManager::requestExit(this,true,bVar2,(basic_string *)&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


