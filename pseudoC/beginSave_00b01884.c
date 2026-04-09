// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginSave
// Entry Point: 00b01884
// Size: 100 bytes
// Signature: undefined __thiscall beginSave(SaveHelper * this, _func_void_void_ptr_bool * param_1, void * param_2)


/* SaveHelper::beginSave(void (*)(void*, bool), void*) */

void __thiscall
SaveHelper::beginSave(SaveHelper *this,_func_void_void_ptr_bool *param_1,void *param_2)

{
  SaveHelper *pSVar1;
  Thread *this_00;
  
  *(_func_void_void_ptr_bool **)(this + 0x38) = param_1;
  *(void **)(this + 0x40) = param_2;
  this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00b018a4 to 00b018a7 has its CatchHandler @ 00b018e8 */
  Thread::Thread(this_00);
  *(Thread **)(this + 0x48) = this_00;
  pSVar1 = this + 0x21;
  if (((byte)this[0x20] & 1) != 0) {
    pSVar1 = *(SaveHelper **)(this + 0x30);
  }
  Thread::start(this_00,staticThreadFunction,this,0xffffffff,(char *)pSVar1,2,0x8000);
  return;
}


