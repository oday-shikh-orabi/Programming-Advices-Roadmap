namespace Pizza_Poject
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.gbSize = new System.Windows.Forms.GroupBox();
            this.rdLarge = new System.Windows.Forms.RadioButton();
            this.rdMedium = new System.Windows.Forms.RadioButton();
            this.rdSmall = new System.Windows.Forms.RadioButton();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.chkGreenPeppers = new System.Windows.Forms.CheckBox();
            this.chkOlives = new System.Windows.Forms.CheckBox();
            this.chkOnion = new System.Windows.Forms.CheckBox();
            this.chkTomatoes = new System.Windows.Forms.CheckBox();
            this.chkMushrooms = new System.Windows.Forms.CheckBox();
            this.chkExtraCheese = new System.Windows.Forms.CheckBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.rdThickCrust = new System.Windows.Forms.RadioButton();
            this.rdThinCrust = new System.Windows.Forms.RadioButton();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.rdTakeOut = new System.Windows.Forms.RadioButton();
            this.rdEatIn = new System.Windows.Forms.RadioButton();
            this.btnOrderPizza = new System.Windows.Forms.Button();
            this.btnResetForm = new System.Windows.Forms.Button();
            this.gbOrderSize = new System.Windows.Forms.GroupBox();
            this.lbPriceAnswer = new System.Windows.Forms.Label();
            this.lbPrice = new System.Windows.Forms.Label();
            this.lbWhereToEatAnswer = new System.Windows.Forms.Label();
            this.lbWhereToEat = new System.Windows.Forms.Label();
            this.lbCrustTybeAnswer = new System.Windows.Forms.Label();
            this.lbCrustTybe = new System.Windows.Forms.Label();
            this.lbToppingsAnswer = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.lbSizeAnswer = new System.Windows.Forms.Label();
            this.lbSize1 = new System.Windows.Forms.Label();
            this.gbSize.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.gbOrderSize.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Bernard MT Condensed", 36F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.Red;
            this.label1.Location = new System.Drawing.Point(453, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(410, 72);
            this.label1.TabIndex = 20;
            this.label1.Text = "Make Your Pizza";
            // 
            // gbSize
            // 
            this.gbSize.Controls.Add(this.rdLarge);
            this.gbSize.Controls.Add(this.rdMedium);
            this.gbSize.Controls.Add(this.rdSmall);
            this.gbSize.Location = new System.Drawing.Point(71, 111);
            this.gbSize.Name = "gbSize";
            this.gbSize.Size = new System.Drawing.Size(200, 113);
            this.gbSize.TabIndex = 0;
            this.gbSize.TabStop = false;
            this.gbSize.Text = "Size";
            // 
            // rdLarge
            // 
            this.rdLarge.AutoSize = true;
            this.rdLarge.Location = new System.Drawing.Point(45, 78);
            this.rdLarge.Name = "rdLarge";
            this.rdLarge.Size = new System.Drawing.Size(63, 21);
            this.rdLarge.TabIndex = 3;
            this.rdLarge.TabStop = true;
            this.rdLarge.Text = "Large";
            this.rdLarge.UseVisualStyleBackColor = true;
            this.rdLarge.CheckedChanged += new System.EventHandler(this.rdLarge_CheckedChanged);
            // 
            // rdMedium
            // 
            this.rdMedium.AutoSize = true;
            this.rdMedium.Location = new System.Drawing.Point(45, 51);
            this.rdMedium.Name = "rdMedium";
            this.rdMedium.Size = new System.Drawing.Size(76, 21);
            this.rdMedium.TabIndex = 2;
            this.rdMedium.TabStop = true;
            this.rdMedium.Text = "Medium";
            this.rdMedium.UseVisualStyleBackColor = true;
            this.rdMedium.CheckedChanged += new System.EventHandler(this.rdMedium_CheckedChanged);
            // 
            // rdSmall
            // 
            this.rdSmall.AutoSize = true;
            this.rdSmall.Location = new System.Drawing.Point(45, 24);
            this.rdSmall.Name = "rdSmall";
            this.rdSmall.Size = new System.Drawing.Size(60, 21);
            this.rdSmall.TabIndex = 1;
            this.rdSmall.TabStop = true;
            this.rdSmall.Text = "Small";
            this.rdSmall.UseVisualStyleBackColor = true;
            this.rdSmall.CheckedChanged += new System.EventHandler(this.rdSmall_CheckedChanged);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.chkGreenPeppers);
            this.groupBox2.Controls.Add(this.chkOlives);
            this.groupBox2.Controls.Add(this.chkOnion);
            this.groupBox2.Controls.Add(this.chkTomatoes);
            this.groupBox2.Controls.Add(this.chkMushrooms);
            this.groupBox2.Controls.Add(this.chkExtraCheese);
            this.groupBox2.Location = new System.Drawing.Point(450, 111);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(402, 113);
            this.groupBox2.TabIndex = 7;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Toppings";
            // 
            // chkGreenPeppers
            // 
            this.chkGreenPeppers.AutoSize = true;
            this.chkGreenPeppers.Location = new System.Drawing.Point(253, 80);
            this.chkGreenPeppers.Name = "chkGreenPeppers";
            this.chkGreenPeppers.Size = new System.Drawing.Size(119, 21);
            this.chkGreenPeppers.TabIndex = 13;
            this.chkGreenPeppers.Text = "Green Peppers";
            this.chkGreenPeppers.UseVisualStyleBackColor = true;
            this.chkGreenPeppers.CheckedChanged += new System.EventHandler(this.chkGreenPeppers_CheckedChanged);
            // 
            // chkOlives
            // 
            this.chkOlives.AutoSize = true;
            this.chkOlives.Location = new System.Drawing.Point(253, 53);
            this.chkOlives.Name = "chkOlives";
            this.chkOlives.Size = new System.Drawing.Size(65, 21);
            this.chkOlives.TabIndex = 11;
            this.chkOlives.Text = "Olives";
            this.chkOlives.UseVisualStyleBackColor = true;
            this.chkOlives.CheckedChanged += new System.EventHandler(this.chkOlives_CheckedChanged);
            // 
            // chkOnion
            // 
            this.chkOnion.AutoSize = true;
            this.chkOnion.Location = new System.Drawing.Point(253, 25);
            this.chkOnion.Name = "chkOnion";
            this.chkOnion.Size = new System.Drawing.Size(66, 21);
            this.chkOnion.TabIndex = 9;
            this.chkOnion.Text = "Onion";
            this.chkOnion.UseVisualStyleBackColor = true;
            this.chkOnion.CheckedChanged += new System.EventHandler(this.chkOnion_CheckedChanged);
            // 
            // chkTomatoes
            // 
            this.chkTomatoes.AutoSize = true;
            this.chkTomatoes.Location = new System.Drawing.Point(75, 80);
            this.chkTomatoes.Name = "chkTomatoes";
            this.chkTomatoes.Size = new System.Drawing.Size(91, 21);
            this.chkTomatoes.TabIndex = 12;
            this.chkTomatoes.Text = "Tomatoes";
            this.chkTomatoes.UseVisualStyleBackColor = true;
            this.chkTomatoes.CheckedChanged += new System.EventHandler(this.chkTomatoes_CheckedChanged);
            // 
            // chkMushrooms
            // 
            this.chkMushrooms.AutoSize = true;
            this.chkMushrooms.Location = new System.Drawing.Point(75, 53);
            this.chkMushrooms.Name = "chkMushrooms";
            this.chkMushrooms.Size = new System.Drawing.Size(101, 21);
            this.chkMushrooms.TabIndex = 10;
            this.chkMushrooms.Text = "Mushrooms";
            this.chkMushrooms.UseVisualStyleBackColor = true;
            this.chkMushrooms.CheckedChanged += new System.EventHandler(this.chkMushrooms_CheckedChanged);
            // 
            // chkExtraCheese
            // 
            this.chkExtraCheese.AutoSize = true;
            this.chkExtraCheese.Location = new System.Drawing.Point(75, 25);
            this.chkExtraCheese.Name = "chkExtraCheese";
            this.chkExtraCheese.Size = new System.Drawing.Size(104, 21);
            this.chkExtraCheese.TabIndex = 8;
            this.chkExtraCheese.Text = "Extra Chees";
            this.chkExtraCheese.UseVisualStyleBackColor = true;
            this.chkExtraCheese.CheckedChanged += new System.EventHandler(this.chkExtraCheese_CheckedChanged);
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.rdThickCrust);
            this.groupBox3.Controls.Add(this.rdThinCrust);
            this.groupBox3.Location = new System.Drawing.Point(71, 288);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(189, 95);
            this.groupBox3.TabIndex = 4;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Crust Type";
            // 
            // rdThickCrust
            // 
            this.rdThickCrust.AutoSize = true;
            this.rdThickCrust.Location = new System.Drawing.Point(46, 59);
            this.rdThickCrust.Name = "rdThickCrust";
            this.rdThickCrust.Size = new System.Drawing.Size(98, 21);
            this.rdThickCrust.TabIndex = 6;
            this.rdThickCrust.Text = "Thick Crust";
            this.rdThickCrust.UseVisualStyleBackColor = true;
            this.rdThickCrust.CheckedChanged += new System.EventHandler(this.rdThickCrust_CheckedChanged);
            // 
            // rdThinCrust
            // 
            this.rdThinCrust.AutoSize = true;
            this.rdThinCrust.Location = new System.Drawing.Point(46, 32);
            this.rdThinCrust.Name = "rdThinCrust";
            this.rdThinCrust.Size = new System.Drawing.Size(92, 21);
            this.rdThinCrust.TabIndex = 5;
            this.rdThinCrust.Text = "Thin Crust";
            this.rdThinCrust.UseVisualStyleBackColor = true;
            this.rdThinCrust.CheckedChanged += new System.EventHandler(this.rdThinCrust_CheckedChanged);
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.rdTakeOut);
            this.groupBox4.Controls.Add(this.rdEatIn);
            this.groupBox4.Location = new System.Drawing.Point(450, 288);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(402, 80);
            this.groupBox4.TabIndex = 14;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "Where To Eat";
            // 
            // rdTakeOut
            // 
            this.rdTakeOut.AutoSize = true;
            this.rdTakeOut.Location = new System.Drawing.Point(254, 32);
            this.rdTakeOut.Name = "rdTakeOut";
            this.rdTakeOut.Size = new System.Drawing.Size(83, 21);
            this.rdTakeOut.TabIndex = 16;
            this.rdTakeOut.TabStop = true;
            this.rdTakeOut.Text = "Take out";
            this.rdTakeOut.UseVisualStyleBackColor = true;
            this.rdTakeOut.CheckedChanged += new System.EventHandler(this.rdTakeOut_CheckedChanged);
            // 
            // rdEatIn
            // 
            this.rdEatIn.AutoSize = true;
            this.rdEatIn.Location = new System.Drawing.Point(76, 32);
            this.rdEatIn.Name = "rdEatIn";
            this.rdEatIn.Size = new System.Drawing.Size(63, 21);
            this.rdEatIn.TabIndex = 15;
            this.rdEatIn.TabStop = true;
            this.rdEatIn.Text = "Eat in";
            this.rdEatIn.UseVisualStyleBackColor = true;
            this.rdEatIn.CheckedChanged += new System.EventHandler(this.rdEatIn_CheckedChanged);
            // 
            // btnOrderPizza
            // 
            this.btnOrderPizza.Location = new System.Drawing.Point(450, 435);
            this.btnOrderPizza.Name = "btnOrderPizza";
            this.btnOrderPizza.Size = new System.Drawing.Size(177, 62);
            this.btnOrderPizza.TabIndex = 17;
            this.btnOrderPizza.Text = "Order Pizza";
            this.btnOrderPizza.UseVisualStyleBackColor = true;
            // 
            // btnResetForm
            // 
            this.btnResetForm.Location = new System.Drawing.Point(675, 435);
            this.btnResetForm.Name = "btnResetForm";
            this.btnResetForm.Size = new System.Drawing.Size(177, 62);
            this.btnResetForm.TabIndex = 18;
            this.btnResetForm.Text = "Reset Form";
            this.btnResetForm.UseVisualStyleBackColor = true;
            // 
            // gbOrderSize
            // 
            this.gbOrderSize.Controls.Add(this.lbPriceAnswer);
            this.gbOrderSize.Controls.Add(this.lbPrice);
            this.gbOrderSize.Controls.Add(this.lbWhereToEatAnswer);
            this.gbOrderSize.Controls.Add(this.lbWhereToEat);
            this.gbOrderSize.Controls.Add(this.lbCrustTybeAnswer);
            this.gbOrderSize.Controls.Add(this.lbCrustTybe);
            this.gbOrderSize.Controls.Add(this.lbToppingsAnswer);
            this.gbOrderSize.Controls.Add(this.label2);
            this.gbOrderSize.Controls.Add(this.lbSizeAnswer);
            this.gbOrderSize.Controls.Add(this.lbSize1);
            this.gbOrderSize.Location = new System.Drawing.Point(1014, 111);
            this.gbOrderSize.Name = "gbOrderSize";
            this.gbOrderSize.Size = new System.Drawing.Size(314, 386);
            this.gbOrderSize.TabIndex = 19;
            this.gbOrderSize.TabStop = false;
            this.gbOrderSize.Text = "Order Summary";
            this.gbOrderSize.UseWaitCursor = true;
            // 
            // lbPriceAnswer
            // 
            this.lbPriceAnswer.AutoSize = true;
            this.lbPriceAnswer.Font = new System.Drawing.Font("Stencil", 22.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbPriceAnswer.ForeColor = System.Drawing.Color.LimeGreen;
            this.lbPriceAnswer.Location = new System.Drawing.Point(132, 324);
            this.lbPriceAnswer.Name = "lbPriceAnswer";
            this.lbPriceAnswer.Size = new System.Drawing.Size(63, 44);
            this.lbPriceAnswer.TabIndex = 9;
            this.lbPriceAnswer.Text = "0$";
            this.lbPriceAnswer.UseWaitCursor = true;
            // 
            // lbPrice
            // 
            this.lbPrice.AutoSize = true;
            this.lbPrice.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbPrice.Location = new System.Drawing.Point(31, 309);
            this.lbPrice.Name = "lbPrice";
            this.lbPrice.Size = new System.Drawing.Size(58, 21);
            this.lbPrice.TabIndex = 8;
            this.lbPrice.Text = "Price:";
            this.lbPrice.UseWaitCursor = true;
            // 
            // lbWhereToEatAnswer
            // 
            this.lbWhereToEatAnswer.AutoSize = true;
            this.lbWhereToEatAnswer.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbWhereToEatAnswer.ForeColor = System.Drawing.Color.Red;
            this.lbWhereToEatAnswer.Location = new System.Drawing.Point(137, 279);
            this.lbWhereToEatAnswer.Name = "lbWhereToEatAnswer";
            this.lbWhereToEatAnswer.Size = new System.Drawing.Size(75, 21);
            this.lbWhereToEatAnswer.TabIndex = 7;
            this.lbWhereToEatAnswer.Text = "Take out";
            this.lbWhereToEatAnswer.UseWaitCursor = true;
            // 
            // lbWhereToEat
            // 
            this.lbWhereToEat.AutoSize = true;
            this.lbWhereToEat.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbWhereToEat.Location = new System.Drawing.Point(31, 251);
            this.lbWhereToEat.Name = "lbWhereToEat";
            this.lbWhereToEat.Size = new System.Drawing.Size(129, 21);
            this.lbWhereToEat.TabIndex = 6;
            this.lbWhereToEat.Text = "Where To Eat:";
            this.lbWhereToEat.UseWaitCursor = true;
            // 
            // lbCrustTybeAnswer
            // 
            this.lbCrustTybeAnswer.AutoSize = true;
            this.lbCrustTybeAnswer.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbCrustTybeAnswer.ForeColor = System.Drawing.Color.Red;
            this.lbCrustTybeAnswer.Location = new System.Drawing.Point(137, 207);
            this.lbCrustTybeAnswer.Name = "lbCrustTybeAnswer";
            this.lbCrustTybeAnswer.Size = new System.Drawing.Size(92, 21);
            this.lbCrustTybeAnswer.TabIndex = 5;
            this.lbCrustTybeAnswer.Text = "No choose.";
            this.lbCrustTybeAnswer.UseWaitCursor = true;
            // 
            // lbCrustTybe
            // 
            this.lbCrustTybe.AutoSize = true;
            this.lbCrustTybe.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbCrustTybe.Location = new System.Drawing.Point(31, 207);
            this.lbCrustTybe.Name = "lbCrustTybe";
            this.lbCrustTybe.Size = new System.Drawing.Size(107, 21);
            this.lbCrustTybe.TabIndex = 4;
            this.lbCrustTybe.Text = "Crust Tybe:";
            this.lbCrustTybe.UseWaitCursor = true;
            // 
            // lbToppingsAnswer
            // 
            this.lbToppingsAnswer.AutoSize = true;
            this.lbToppingsAnswer.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbToppingsAnswer.ForeColor = System.Drawing.Color.Red;
            this.lbToppingsAnswer.Location = new System.Drawing.Point(84, 111);
            this.lbToppingsAnswer.Name = "lbToppingsAnswer";
            this.lbToppingsAnswer.Size = new System.Drawing.Size(107, 21);
            this.lbToppingsAnswer.TabIndex = 3;
            this.lbToppingsAnswer.Text = "No Toppings.";
            this.lbToppingsAnswer.UseWaitCursor = true;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(31, 78);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(95, 21);
            this.label2.TabIndex = 2;
            this.label2.Text = "Toppings:";
            this.label2.UseWaitCursor = true;
            // 
            // lbSizeAnswer
            // 
            this.lbSizeAnswer.AutoSize = true;
            this.lbSizeAnswer.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbSizeAnswer.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(192)))), ((int)(((byte)(0)))));
            this.lbSizeAnswer.Location = new System.Drawing.Point(84, 35);
            this.lbSizeAnswer.Name = "lbSizeAnswer";
            this.lbSizeAnswer.Size = new System.Drawing.Size(92, 21);
            this.lbSizeAnswer.TabIndex = 1;
            this.lbSizeAnswer.Text = "No choose.";
            this.lbSizeAnswer.UseWaitCursor = true;
            // 
            // lbSize1
            // 
            this.lbSize1.AutoSize = true;
            this.lbSize1.Font = new System.Drawing.Font("Tahoma", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbSize1.Location = new System.Drawing.Point(31, 34);
            this.lbSize1.Name = "lbSize1";
            this.lbSize1.Size = new System.Drawing.Size(56, 21);
            this.lbSize1.TabIndex = 0;
            this.lbSize1.Text = "Size: ";
            this.lbSize1.UseWaitCursor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1369, 566);
            this.Controls.Add(this.gbOrderSize);
            this.Controls.Add(this.btnResetForm);
            this.Controls.Add(this.btnOrderPizza);
            this.Controls.Add(this.groupBox4);
            this.Controls.Add(this.groupBox3);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.gbSize);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Pizza Project";
            this.gbSize.ResumeLayout(false);
            this.gbSize.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.gbOrderSize.ResumeLayout(false);
            this.gbOrderSize.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox gbSize;
        private System.Windows.Forms.RadioButton rdLarge;
        private System.Windows.Forms.RadioButton rdMedium;
        private System.Windows.Forms.RadioButton rdSmall;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.CheckBox chkTomatoes;
        private System.Windows.Forms.CheckBox chkMushrooms;
        private System.Windows.Forms.CheckBox chkExtraCheese;
        private System.Windows.Forms.CheckBox chkGreenPeppers;
        private System.Windows.Forms.CheckBox chkOlives;
        private System.Windows.Forms.CheckBox chkOnion;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.RadioButton rdThinCrust;
        private System.Windows.Forms.RadioButton rdThickCrust;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.RadioButton rdTakeOut;
        private System.Windows.Forms.RadioButton rdEatIn;
        private System.Windows.Forms.Button btnOrderPizza;
        private System.Windows.Forms.Button btnResetForm;
        private System.Windows.Forms.GroupBox gbOrderSize;
        private System.Windows.Forms.Label lbSize1;
        private System.Windows.Forms.Label lbSizeAnswer;
        private System.Windows.Forms.Label lbToppingsAnswer;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label lbCrustTybe;
        private System.Windows.Forms.Label lbPrice;
        private System.Windows.Forms.Label lbWhereToEatAnswer;
        private System.Windows.Forms.Label lbWhereToEat;
        private System.Windows.Forms.Label lbCrustTybeAnswer;
        private System.Windows.Forms.Label lbPriceAnswer;
    }
}

