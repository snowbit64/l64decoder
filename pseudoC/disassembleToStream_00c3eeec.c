// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: disassembleToStream
// Entry Point: 00c3eeec
// Size: 884 bytes
// Signature: undefined __thiscall disassembleToStream(IR_Section * this, CodeStringStream * param_1)


/* IR_Section::disassembleToStream(CodeStringStream*) const */

void __thiscall IR_Section::disassembleToStream(IR_Section *this,CodeStringStream *param_1)

{
  CodeStringStream *pCVar1;
  StringStream *this_00;
  char *__s;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  CodeStringStream aCStack_1098 [24];
  byte local_1080;
  void *local_1070;
  ulong local_1068;
  undefined8 uStack_1060;
  char *local_1058;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  CodeStringStream::CodeStringStream(aCStack_1098);
  pCVar1 = aCStack_1098;
  if (param_1 != (CodeStringStream *)0x0) {
    pCVar1 = param_1;
  }
                    /* try { // try from 00c3ef4c to 00c3ef97 has its CatchHandler @ 00c3f280 */
  CodeStringStream::writeLine
            ((char *)pCVar1,"SECTION%u [%s]",(ulong)*(uint *)(this + 0x3c),
             &DAT_0053e164 + *(int *)(&DAT_0053e164 + (ulong)*(uint *)(this + 0x38) * 4));
  if (1 < *(int *)(this + 0x9c) + 1U) {
    CodeStringStream::writeLine((char *)pCVar1," LOOPCOUNT %u\n");
  }
  if (*(long *)(this + 0x48) != *(long *)(this + 0x40)) {
    CodeStringStream::writeLine((char *)pCVar1,&DAT_004e3e08);
    lVar3 = *(long *)(this + 0x40);
    if (*(long *)(this + 0x48) != lVar3) {
      uVar7 = 0;
      do {
        if (uVar7 != 0) {
                    /* try { // try from 00c3efc4 to 00c3efeb has its CatchHandler @ 00c3f284 */
          CodeStringStream::writeLine((char *)pCVar1,&DAT_0050e6c1);
          lVar3 = *(long *)(this + 0x40);
        }
        if (*(char *)(lVar3 + uVar7 * 8 + 4) != '\0') {
          CodeStringStream::writeLine((char *)pCVar1,&DAT_004e9075);
          lVar3 = *(long *)(this + 0x40);
        }
                    /* try { // try from 00c3eff8 to 00c3f017 has its CatchHandler @ 00c3f290 */
        IR_InstructionSequence::printReg
                  ((IR_InstructionSequence *)this,(char *)&local_1068,*(uint *)(lVar3 + uVar7 * 8),
                   (vector *)0x0);
        CodeStringStream::writeLine((char *)pCVar1,&DAT_004d33bb,&local_1068);
        lVar3 = *(long *)(this + 0x40);
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (uVar7 < (ulong)(*(long *)(this + 0x48) - lVar3 >> 3));
    }
  }
                    /* try { // try from 00c3f02c to 00c3f053 has its CatchHandler @ 00c3f280 */
  CodeStringStream::writeLine((char *)pCVar1,&DAT_004fddf9);
  if (*(long *)(this + 0x70) != 0) {
    CodeStringStream::writeLine((char *)pCVar1,"READS:");
    uVar7 = *(ulong *)(this + 0x70);
    if (uVar7 != 0) {
      uVar4 = 0;
      uVar5 = 0;
      bVar8 = true;
      do {
        if ((*(ulong *)(*(long *)(this + 0x68) + (uVar4 >> 3 & 0x1ffffffffffffff8)) >>
             (uVar4 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c3f0a4 to 00c3f0cf has its CatchHandler @ 00c3f28c */
          IR_InstructionSequence::printReg
                    ((IR_InstructionSequence *)this,(char *)&local_1068,uVar5,(vector *)0x0);
          uVar6 = 0x20;
          if (!bVar8) {
            uVar6 = 0x2c;
          }
          CodeStringStream::writeLine((char *)pCVar1,&DAT_004dc86e,(ulong)uVar6,&local_1068);
          bVar8 = false;
          uVar7 = *(ulong *)(this + 0x70);
        }
        uVar5 = uVar5 + 1;
        uVar4 = (ulong)uVar5;
      } while (uVar4 < uVar7);
    }
                    /* try { // try from 00c3f0dc to 00c3f0eb has its CatchHandler @ 00c3f27c */
    CodeStringStream::writeLine((char *)pCVar1,&DAT_004fddf9);
  }
  if (*(long *)(this + 0x88) != 0) {
                    /* try { // try from 00c3f0f4 to 00c3f103 has its CatchHandler @ 00c3f280 */
    CodeStringStream::writeLine((char *)pCVar1,"WRITES:");
    uVar7 = *(ulong *)(this + 0x88);
    if (uVar7 != 0) {
      uVar4 = 0;
      uVar5 = 0;
      bVar8 = true;
      do {
        if ((*(ulong *)(*(long *)(this + 0x80) + (uVar4 >> 3 & 0x1ffffffffffffff8)) >>
             (uVar4 & 0x3f) & 1) != 0) {
                    /* try { // try from 00c3f15c to 00c3f187 has its CatchHandler @ 00c3f288 */
          IR_InstructionSequence::printReg
                    ((IR_InstructionSequence *)this,(char *)&local_1068,uVar5,(vector *)0x0);
          uVar6 = 0x20;
          if (!bVar8) {
            uVar6 = 0x2c;
          }
          CodeStringStream::writeLine((char *)pCVar1,&DAT_004dc86e,(ulong)uVar6,&local_1068);
          bVar8 = false;
          uVar7 = *(ulong *)(this + 0x88);
        }
        uVar5 = uVar5 + 1;
        uVar4 = (ulong)uVar5;
      } while (uVar4 < uVar7);
    }
                    /* try { // try from 00c3f18c to 00c3f19b has its CatchHandler @ 00c3f278 */
    CodeStringStream::writeLine((char *)pCVar1,&DAT_004fddf9);
  }
                    /* try { // try from 00c3f19c to 00c3f1bf has its CatchHandler @ 00c3f280 */
  IR_InstructionSequence::disassembleInstsToStream((IR_InstructionSequence *)this,pCVar1,"    ");
  CodeStringStream::writeLine((char *)pCVar1,&DAT_004fddf9);
  if (pCVar1 == aCStack_1098) {
    local_1068 = 0;
    uStack_1060 = 0;
    this_00 = (StringStream *)aCStack_1098;
    if (param_1 != (CodeStringStream *)0x0) {
      this_00 = (StringStream *)param_1;
    }
    local_1058 = (char *)0x0;
                    /* try { // try from 00c3f1dc to 00c3f1e7 has its CatchHandler @ 00c3f260 */
    StringStream::resolve(this_00,(basic_string *)&local_1068);
    __s = (char *)((ulong)&local_1068 | 1);
    if ((local_1068 & 1) != 0) {
      __s = local_1058;
    }
    puts(__s);
    if ((local_1068 & 1) != 0) {
      operator_delete(local_1058);
    }
  }
  if ((local_1080 & 1) != 0) {
    operator_delete(local_1070);
  }
  StringStream::~StringStream((StringStream *)aCStack_1098);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


