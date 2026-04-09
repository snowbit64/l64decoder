// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: disassembleToStream
// Entry Point: 00c29224
// Size: 456 bytes
// Signature: undefined __thiscall disassembleToStream(IR_Function * this, CodeStringStream * param_1)


/* IR_Function::disassembleToStream(CodeStringStream*) const */

void __thiscall IR_Function::disassembleToStream(IR_Function *this,CodeStringStream *param_1)

{
  CodeStringStream *pCVar1;
  IR_Function *pIVar2;
  StringStream *this_00;
  char *pcVar3;
  long lVar4;
  long lVar5;
  IR_Function *pIVar6;
  ulong uVar7;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  CodeStringStream aCStack_78 [24];
  byte local_60;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  CodeStringStream::CodeStringStream(aCStack_78);
  pIVar6 = *(IR_Function **)(this + 0x10);
  pCVar1 = aCStack_78;
  if (param_1 != (CodeStringStream *)0x0) {
    pCVar1 = param_1;
  }
  if (((byte)*this & 1) == 0) {
    pIVar6 = this + 1;
  }
  pIVar2 = this + 0x19;
  if (((byte)this[0x18] & 1) != 0) {
    pIVar2 = *(IR_Function **)(this + 0x28);
  }
                    /* try { // try from 00c29288 to 00c29327 has its CatchHandler @ 00c29404 */
  CodeStringStream::writeLine((char *)pCVar1,"%s (%s)\n\n",pIVar6,pIVar2);
  uVar7 = (ulong)((byte)this[0x40] >> 1);
  if (((byte)this[0x40] & 1) != 0) {
    uVar7 = *(ulong *)(this + 0x48);
  }
  if (uVar7 == 0) {
    CodeStringStream::writeLine
              ((char *)pCVar1,"Assembly type : %s\n",
               &DAT_0053dee8 + *(int *)(&DAT_0053dee8 + (ulong)*(uint *)(this + 100) * 4));
    lVar5 = *(long *)(this + 0xb8);
    if (*(long *)(this + 0xc0) != lVar5) {
      uVar7 = 0;
      do {
                    /* try { // try from 00c2933c to 00c29343 has its CatchHandler @ 00c29408 */
        IR_Section::disassembleToStream(*(IR_Section **)(lVar5 + uVar7 * 8),pCVar1);
        lVar5 = *(long *)(this + 0xb8);
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(*(long *)(this + 0xc0) - lVar5 >> 3));
    }
  }
  else {
    pcVar3 = "InlineAssembly";
    if (this[0x60] != (IR_Function)0x0) {
      pcVar3 = "PureInlineAssembly";
    }
    CodeStringStream::writeLine((char *)pCVar1,"Assembly type : %s\n",pcVar3);
    pIVar6 = *(IR_Function **)(this + 0x50);
    if (((byte)this[0x40] & 1) == 0) {
      pIVar6 = this + 0x41;
    }
    CodeStringStream::writeLine((char *)pCVar1,"{%s}\n",pIVar6);
  }
  if (pCVar1 == aCStack_78) {
    local_90 = 0;
    uStack_88 = 0;
    this_00 = (StringStream *)aCStack_78;
    if (param_1 != (CodeStringStream *)0x0) {
      this_00 = (StringStream *)param_1;
    }
    local_80 = (char *)0x0;
                    /* try { // try from 00c29374 to 00c2937f has its CatchHandler @ 00c293ec */
    StringStream::resolve(this_00,(basic_string *)&local_90);
    pcVar3 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pcVar3 = local_80;
    }
    puts(pcVar3);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  StringStream::~StringStream((StringStream *)aCStack_78);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


