// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScriptingConsoleCommand
// Entry Point: 006e9358
// Size: 428 bytes
// Signature: undefined __thiscall ScriptingConsoleCommand(ScriptingConsoleCommand * this, char * param_1, char * param_2, char * param_3, void * param_4)


/* ScriptingConsoleCommand::ScriptingConsoleCommand(char const*, char const*, char const*, void*) */

void __thiscall
ScriptingConsoleCommand::ScriptingConsoleCommand
          (ScriptingConsoleCommand *this,char *param_1,char *param_2,char *param_3,void *param_4)

{
  size_t sVar1;
  ScriptingConsoleCommand *pSVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__ScriptingConsoleCommand_00fd9448;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pSVar2 = this + 9;
    this[8] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_006e93ec;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pSVar2 = (ScriptingConsoleCommand *)operator_new(uVar3);
    *(size_t *)(this + 0x10) = sVar1;
    *(ScriptingConsoleCommand **)(this + 0x18) = pSVar2;
    *(ulong *)(this + 8) = uVar3 | 1;
LAB_006e93ec:
    memcpy(pSVar2,param_1,sVar1);
  }
  pSVar2[sVar1] = (ScriptingConsoleCommand)0x0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 006e94f4 to 006e94fb has its CatchHandler @ 006e9534 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pSVar2 = this + 0x21;
    this[0x20] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_006e9454;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006e943c to 006e9443 has its CatchHandler @ 006e9534 */
    pSVar2 = (ScriptingConsoleCommand *)operator_new(uVar3);
    *(size_t *)(this + 0x28) = sVar1;
    *(ScriptingConsoleCommand **)(this + 0x30) = pSVar2;
    *(ulong *)(this + 0x20) = uVar3 | 1;
LAB_006e9454:
    memcpy(pSVar2,param_2,sVar1);
  }
  pSVar2[sVar1] = (ScriptingConsoleCommand)0x0;
  sVar1 = strlen(param_3);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 006e94fc to 006e9503 has its CatchHandler @ 006e9504 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pSVar2 = this + 0x39;
    this[0x38] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_006e94c8;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 006e94a0 to 006e94a7 has its CatchHandler @ 006e9504 */
    pSVar2 = (ScriptingConsoleCommand *)operator_new(uVar3);
    *(size_t *)(this + 0x40) = sVar1;
    *(ScriptingConsoleCommand **)(this + 0x48) = pSVar2;
    *(ulong *)(this + 0x38) = uVar3 | 1;
  }
  memcpy(pSVar2,param_3,sVar1);
LAB_006e94c8:
  pSVar2[sVar1] = (ScriptingConsoleCommand)0x0;
  *(void **)(this + 0x50) = param_4;
  return;
}


