   M S B A M L   `   `   `  ����  ANT_NetDll_Demo     ANT_NetDll_Demo.DemoWindow   5	   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5
      R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5        � Title$  Window1��5      $	��768��6   $
��1024��6"   .��5      � .+�5   
   �� -   5        $��button_Start��5   7   $��40.008��6   $��222,32,490,0q�6!   $	��Top=�6K   
������.��6�   
Start Demo6�   �� 5   
   -   5        $��comboBox_demoMode��5   3   $��23��6   $��
0,40,264,0q�6   $	��Top=�6L    �� SelectedIndex$ 0��6d   $��Right=�6v   $	��204��6�   .@�5      �� .��6   %#Device 0 - Master, Device 1 - Slave6@   �� 5      .��6   Device 0 Only - Master63   �� 5      .��6   Device 0 Only - Slave62   5      �� 5   
   -   5        $��border_DemoControls��5      $��1q�6,   ���	#2F0000FF �� CornerRadius$ 15��6X   $��12,98,12,12q�6j   {�.  ._�5      � .+�5      �� -   5        $��textBox_device0��5   f   $ �� HorizontalScrollBarVisibility$
 Auto=�6    �� 
IsReadOnly . $��464,38,18,0q�6Q   " �� VerticalScrollBarVisibility$
 Auto=�6}   $	��248��6�   $	��Top=�6�   �� 5      -   5        $��textBox_device1��5   v   $��250.05��6   $
 Auto=�6*    . $��464,0,18,20q�6a   $��Bottom=�6�   $
 Auto=�6�   6�   �� 5      -   5        $��label_device0��5   >   $��25.005��6   $��464,14,358,0q�6(   $	��Top=�6S   .��6k   Device 0 - raw responses6�   �� 5      -   5        $��label_device1��5   ?   $��25.005��6   $��464,0,348,268q�6(   $��Bottom=�6T   .��6o   Device 1 - raw responses6�   �� 5      -   5        $��	groupBox1��5   I   $��Demo Control��6   $��26.058,44,0,28q�61   $
��Left=�6Z   $	��412��6u   .��5      � .+�5      �� -	   5        $��textBox_Display��5   9   $��9.942,96,6,20q�6"   $
 Auto=�6P    �� TextWrapping$
 Wrap=�6s    . 6�   �� 5      -
   5        $��comboBox_actionList��5   K   $��23��6#   $��9.942,34,102.058,0q�6/   $	��Top=�6f   $ 0��6~   .@�5      �� .��6+    Send Acknowledged Message (d0)6K   �� 5       .��6+   Send Burst Message (d0)6D   �� 5!      .��6+   $"Set Broadcast to random value (d0)6O   �� 5"      .��6+   Request Capabilities6A   �� 5#      .��6+   Request Version6<   �� 5$      .��6+   Request Channel ID6?   �� 5%      .��6+   Request Status6;   5&      �� 5'      -   5        $��button_DoAction��5'   \   $��46��6!   $��Right=�6-   $��	0,22,12,0q�6I   $	��Top=�6s   $��75��6�   .��6�   	Do Action6�   5(      5)      5*      5+      5,      5-      