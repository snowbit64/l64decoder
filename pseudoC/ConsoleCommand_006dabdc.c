// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConsoleCommand
// Entry Point: 006dabdc
// Size: 80 bytes
// Signature: undefined __thiscall ~ConsoleCommand(ConsoleCommand * this)


/* ConsoleCommand::~ConsoleCommand() */

void __thiscall ConsoleCommand::~ConsoleCommand(ConsoleCommand *this)

{
  *(undefined ***)this = &PTR__ConsoleCommand_00fd90f8;
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


