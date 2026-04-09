// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: simpleJobComplete
// Entry Point: 00eabc08
// Size: 80 bytes
// Signature: undefined __thiscall simpleJobComplete(SimpleJobSystemImpl * this, SimpleJob * param_1)


/* non-virtual thunk to
   simplejobsystem::SimpleJobSystemImpl::simpleJobComplete(simplejobsystem::SimpleJob*) */

void __thiscall
simplejobsystem::SimpleJobSystemImpl::simpleJobComplete
          (SimpleJobSystemImpl *this,SimpleJob *param_1)

{
  if (param_1 != (SimpleJob *)0x0) {
    operator_delete(param_1);
  }
  FUN_00f27700(0xffffffff,this + 8);
  if ((int)*(undefined8 *)(this + 8) != 0) {
    return;
  }
  std::__ndk1::condition_variable::notify_all();
  return;
}


