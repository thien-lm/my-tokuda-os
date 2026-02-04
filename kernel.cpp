void printf(char* str) {
    unsigned short* VideoMemory = (unsigned short*)0xb80000;

    for(int i = 0; str[i] != '\0'; ++i) 
        VideoMemory[i] = (VideoMemory[i] & 0xF000) | str[i];
}

extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber) {
    printf("hello world, i am tokudaOS");

    while(1);
}