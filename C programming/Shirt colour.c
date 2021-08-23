main()
{
union id
{
char color;
int size;
};
struct {
char supplier[20];
float cost;
union id desc;
}pant, shirt;
printf("%d\n", sizeof(union id));
shirt.desc.color = 'w';
printf("%c %d\n", shirt.desc.color, shirt.desc.size);
shirt.desc.size = 12;
printf("%c %d\n", shirt.desc.color, shirt.desc.size);
}
